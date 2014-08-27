package se.findout.hansoft.integration_server.adapter;


import static org.junit.Assert.assertEquals;
import static org.powermock.api.easymock.PowerMock.mockStatic;

import java.util.ArrayList;

import org.easymock.EasyMock;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.powermock.api.easymock.PowerMock;
import org.powermock.core.classloader.annotations.PrepareForTest;
import org.powermock.modules.junit4.PowerMockRunner;

import se.findout.hansoft.integration_server.model.Commit;
import se.hansoft.hpmsdk.EHPMSdkDebugMode;
import se.hansoft.hpmsdk.HPMCommunicationChannelPacket;
import se.hansoft.hpmsdk.HPMResourceEnum;
import se.hansoft.hpmsdk.HPMResourceProperties;
import se.hansoft.hpmsdk.HPMSdkException;
import se.hansoft.hpmsdk.HPMSdkJavaException;
import se.hansoft.hpmsdk.HPMSdkSession;
import se.hansoft.hpmsdk.HPMUniqueID;

@RunWith(PowerMockRunner.class)
@PrepareForTest( { HPMSdkSession.class })
public class HansoftAdapterTest {

    private HansoftServer server;
    private Credentials user;
    private String project;
    private HPMSdkSession sdkMock;

    @Before
    public void setup() {
        server = new HansoftServer();
        user = new Credentials();
        user.setUsername("SDK");
        user.setPassword("SDK");
        project = "TestDB";


    }


    private void mockupSessionOpen() throws HPMSdkException, HPMSdkJavaException {
        mockStatic(HPMSdkSession.class);
        sdkMock = PowerMock.createMock(HPMSdkSession.class);
        //String hansoftSDKpath = "/home/bjorn/github/hansoft-svn/HansoftSDK_7_502/Linux2.6";
        String hansoftSDKpath = System.getenv("HANSOFT_WORKING_DIR"); //"/Users/fredrik/dev/SDKs/Hansoft/HansoftSDK_7_502/OSX10.7";
        String hansoftWorkingDir = System.getenv("HANSOFT_SDK_PATH"); //"/Users/fredrik/git/hansoft-svn/hansoft-integration";
        HPMSdkSession sessionOpen = HPMSdkSession.SessionOpen(
                server.getURL(), 
                server.getPort(), 
                project, 
                user.getUsername(), 
                user.getPassword(),
                null, 
                null, 
                true, 
                EHPMSdkDebugMode.Debug, 
                0, 
                hansoftWorkingDir,  
                hansoftSDKpath, 
                null);
        //null, 
        //null, 
        //true, 
        //EHPMSdkDebugMode.Debug, 
        //0, 
        //"/home/bjorn/github/hansoft-svn/hansoft-integration",  
        //"/home/bjorn/github/hansoft-svn/HansoftSDK_7_502/Linux2.6", 
        //null))
        EasyMock.expect(sessionOpen)
                .andReturn(sdkMock);

    }

    private void mockResourceEnum() throws HPMSdkException, HPMSdkJavaException {
        ArrayList<HPMUniqueID> users = new ArrayList<HPMUniqueID>();
        users.add(new HPMUniqueID(42));
        HPMResourceEnum testEnum = new HPMResourceEnum();
        testEnum.m_Resources.addAll(users);
        EasyMock.expect(sdkMock.ResourceEnum()).andReturn(testEnum);

        HPMResourceProperties testprop = new HPMResourceProperties();
        testprop.m_Name = "bjorn";
        EasyMock.expect(sdkMock.ResourceGetProperties(new HPMUniqueID(42))).andReturn(testprop);
    }

    private HansoftAdapter openMockAdapter() throws HansoftException {
        PowerMock.replay(HPMSdkSession.class);
        HansoftAdapter adapter = new HansoftAdapter();
        adapter.initialize(server, project, user);
        return adapter;
    }

    private HansoftAdapter mockAdapter() throws HansoftException, HPMSdkException, HPMSdkJavaException {
        mockupSessionOpen();
        return openMockAdapter();
    }

    @Test
    public void testInitAdapterDefault() throws HansoftException, HPMSdkException, HPMSdkJavaException  {
        mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }

    @Test
    public void testInitCustomHansoftURL() throws HansoftException, HPMSdkException, HPMSdkJavaException  {
        server = new HansoftServer("http://hansoftserver.com", 50257);
        mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }

    @Test
    public void testInitCustomProject() throws HansoftException, HPMSdkException, HPMSdkJavaException  {
        project = "Another Project";
        mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }

    @Test
    public void testInitCustomUser() throws HansoftException, HPMSdkException, HPMSdkJavaException  {
        user.setPassword("A!Q_33f");
        mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }

    @Test
    public void testResourceEnumReturnsNull() throws HansoftException, HPMSdkException, HPMSdkJavaException {
        // Setup
        mockupSessionOpen();
        EasyMock.expect(sdkMock.ResourceEnum()).andReturn(null);

        // Run
        PowerMock.replay(sdkMock);
        HansoftAdapter adapter = openMockAdapter();
        int id = adapter.getUserID("bjorn");

        // Verify
        EasyMock.verify(sdkMock);
        PowerMock.verify(HPMSdkSession.class);
        assertEquals(-1, id);
    }

    @Test
    public void testUserExists1() throws HPMSdkException, HPMSdkJavaException, HansoftException {
        // Setup
        mockupSessionOpen();
        mockResourceEnum();

        // Run
        PowerMock.replay(sdkMock);
        HansoftAdapter adapter = openMockAdapter();
        int id = adapter.getUserID("bjorn");

        // Verify
        EasyMock.verify(sdkMock);
        PowerMock.verify(HPMSdkSession.class);
        assertEquals(42, id);
    }

    @Test
    public void testUserNotExists() throws HPMSdkException, HPMSdkJavaException, HansoftException {
        // Setup
        mockupSessionOpen();
        mockResourceEnum();

        // Run
        PowerMock.replay(sdkMock);
        HansoftAdapter adapter = openMockAdapter();
        int id = adapter.getUserID("pelle");

        // Verify
        EasyMock.verify(sdkMock);
        PowerMock.verify(HPMSdkSession.class);
        assertEquals(-1, id);
    }

    @Test
    public void testSignalCommit() throws HPMSdkException, HPMSdkJavaException, HansoftException {
        // Setup
        mockupSessionOpen();
        HPMCommunicationChannelPacket packet = new HPMCommunicationChannelPacket();
        packet.m_Bytes = "1".getBytes();
        sdkMock.CommunicationChannelSendPacket("svnChannel", 42, packet);
        EasyMock.expectLastCall();

        // Run
        EasyMock.replay(sdkMock);
        HansoftAdapter adapter = openMockAdapter();
        Commit commit = new Commit("author", 17, "/path/to/repo/stuff", "Another test of commit");
        adapter.signalCommitPerformed(42, commit);

        // Verify
        EasyMock.verify(sdkMock);
        PowerMock.verify(HPMSdkSession.class);
    }
}
