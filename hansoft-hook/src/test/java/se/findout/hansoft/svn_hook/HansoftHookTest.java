package se.findout.hansoft.svn_hook;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNull;

import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;

import se.findout.hansoft.integration_server.IntegrationServer;

public class HansoftHookTest {
	
	private HansoftHook hook;
	private static IntegrationServer is;

	@BeforeClass
	public static void classSetup() {
		is = new IntegrationServer();
		is.start();
	}
	
	@AfterClass
	public static void classTeardown() {
		is.shutdown();
	}
	
	@Before
	public void setup() {
		hook = new HansoftHook();
		
	    //hook.setAuthor("bjorn");
	    //hook.setTask(1);
	}
	
	@Test
	public void testSendRequestToIntegrationServer() throws Exception {

	    String append = hook.sendRequest("http://localhost:8080");
	    assertEquals("\"append\": \"Hansoft-URL: hansoft://hansoftserver/Task/1\"", append);
	}

	@Test
	public void testTimeOutReturnsNull() {
	    String append = hook.sendRequest("http://localhost:8080/somethingelse");
	    assertNull(append);
	}
}
