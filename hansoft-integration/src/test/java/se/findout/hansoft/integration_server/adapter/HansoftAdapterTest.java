package se.findout.hansoft.integration_server.adapter;


import org.easymock.EasyMock;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.powermock.api.easymock.PowerMock;
import org.powermock.core.classloader.annotations.PrepareForTest;
import org.powermock.modules.junit4.PowerMockRunner;
import se.hansoft.hpmsdk.*;

import java.util.ArrayList;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNull;
import static org.powermock.api.easymock.PowerMock.mockStatic;

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
        project = "Company Projects";


    }


    private void mockupSessionOpen() throws HPMSdkException, HPMSdkJavaException {
        mockStatic(HPMSdkSession.class);
        sdkMock = PowerMock.createMock(HPMSdkSession.class);
        EasyMock.expect(HPMSdkSession.SessionOpen(
                server.getURL(), server.getPort(), project, user.getUsername(), user.getPassword(),
                null, null, true, EHPMSdkDebugMode.Off, 0, "", "", null))
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

    private HansoftAdapter openMockAdapter() throws HPMSdkException, HPMSdkJavaException {
        PowerMock.replay(HPMSdkSession.class);
        HansoftAdapter adapter = new HansoftAdapter();
        adapter.initialize(server, project, user);
        return adapter;
    }

    private HansoftAdapter mockAdapter() throws HPMSdkException, HPMSdkJavaException {
        mockupSessionOpen();
        return openMockAdapter();
    }

    @Test
    public void testInitAdapterDefault() throws HPMSdkException, HPMSdkJavaException {
        mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }

    @Test
    public void testInitCustomHansoftURL() throws HPMSdkException, HPMSdkJavaException {
        server = new HansoftServer("http://hansoftserver.com", 50257);
        mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }

    @Test
    public void testInitCustomProject() throws HPMSdkException, HPMSdkJavaException {
        project = "Another Project";
        mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }

    @Test
    public void testInitCustomUser() throws HPMSdkException, HPMSdkJavaException {
        user.setPassword("A!Q_33f");
        mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }

    @Test
    public void testResourceEnumReturnsNull() throws HPMSdkException, HPMSdkJavaException {
        // Setup
        mockupSessionOpen();

        EasyMock.expect(sdkMock.ResourceEnum()).andReturn(null);

        // Run
        PowerMock.replay(sdkMock);
        HansoftAdapter adapter = openMockAdapter();
        int id = adapter.getUserID("bjorn");

        // Verify
        PowerMock.verify(HPMSdkSession.class);
        assertEquals(adapter.USER_DOES_NOT_EXIST, id);
    }

    @Test
    public void testUserExists1() throws HPMSdkException, HPMSdkJavaException {
        // Setup
        mockupSessionOpen();
        mockResourceEnum();

        // Run
        PowerMock.replay(sdkMock);
        HansoftAdapter adapter = openMockAdapter();
        int id = adapter.getUserID("bjorn");

        // Verify
        PowerMock.verify(HPMSdkSession.class);
        assertEquals(42, id);
    }

    @Test
    public void testUserNotExists() throws HPMSdkException, HPMSdkJavaException {
        // Setup
        mockupSessionOpen();

        mockResourceEnum();

        // Run
        PowerMock.replay(sdkMock);
        HansoftAdapter adapter = openMockAdapter();
        int id = adapter.getUserID("pelle");

        // Verify
        PowerMock.verify(HPMSdkSession.class);
        assertEquals(-1, id);
    }

}
