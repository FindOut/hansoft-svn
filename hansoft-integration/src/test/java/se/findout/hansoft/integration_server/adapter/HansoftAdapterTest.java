package se.findout.hansoft.integration_server.adapter;


import org.easymock.EasyMock;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.powermock.api.easymock.PowerMock;
import org.powermock.core.classloader.annotations.PrepareForTest;
import org.powermock.modules.junit4.PowerMockRunner;
import se.hansoft.hpmsdk.*;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNull;
import static org.powermock.api.easymock.PowerMock.createMock;
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

    public HansoftAdapter mockAdapter() throws HPMSdkException, HPMSdkJavaException {
        mockStatic(HPMSdkSession.class);
        sdkMock = PowerMock.createMock(HPMSdkSession.class);
        EasyMock.expect(HPMSdkSession.SessionOpen(
                server.getURL(), server.getPort(), project, user.getUsername(), user.getPassword(),
                null, null, true, EHPMSdkDebugMode.Off, 0, "", "", null))
                .andReturn(null);

        PowerMock.replay(HPMSdkSession.class);
        HansoftAdapter adapter = new HansoftAdapter();
        adapter.initialize(server, project, user);
        return adapter;
    }

    @Test
    public void testInitAdapterDefault() throws HPMSdkException, HPMSdkJavaException {
        HansoftAdapter adapter = mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }

    @Test
    public void testInitCustomHansoftURL() throws HPMSdkException, HPMSdkJavaException {
        server = new HansoftServer("http://hansoftserver.com", 50257);
        HansoftAdapter adapter = mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }

    @Test
    public void testInitCustomProject() throws HPMSdkException, HPMSdkJavaException {
        project = "Another Project";
        HansoftAdapter adapter = mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }

    @Test
    public void testInitCustomUser() throws HPMSdkException, HPMSdkJavaException {
        user.setPassword("A!Q_33f");
        HansoftAdapter adapter = mockAdapter();
        PowerMock.verify(HPMSdkSession.class);
    }




    @Test
    public void testUserDoesNotExist() throws HPMSdkException, HPMSdkJavaException {
        HansoftAdapter adapter = mockAdapter();
        int id = adapter.getUserID("bjorn");
        assertEquals(adapter.USER_DOES_NOT_EXIST, id);
    }

    //    @Test
//    public void testUserExists() throws HPMSdkException, HPMSdkJavaException {
//        mockAdapter();
//        ArrayList<HPMUniqueID> users = new ArrayList<HPMUniqueID>();
//        users.add(new HPMUniqueID(42));
//        HPMResourceEnum testEnum = new HPMResourceEnum();
//        testEnum.m_Resources
//        EasyMock.expect(sdkMock.ResourceEnum()).andReturn(testEnum);
//        //EasyMock.expect(enumMock.m_Resources)
//        HansoftAdapter adapter = new HansoftAdapter();
//        adapter.initialize(server, project, user);
//        int id = adapter.getUserID("bjorn");
//        assertEquals(adapter.USER_DOES_NOT_EXIST, id);
//    }

    @Test
    public void testGetUrlNoUser() throws HPMSdkException, HPMSdkJavaException {
        HansoftAdapter adapter = mockAdapter();
        int id = adapter.getUserID("bjorn");
        String url = adapter.getUserURL(id);
        assertNull(url);
    }

}
