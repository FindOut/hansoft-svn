package se.findout.hansoft.integration_server;

import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertTrue;

import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.junit.Test;

public class IntegrationServerTest {

	private static IntegrationServer server;

	@BeforeClass
	public static void setupClass() {
		server = new IntegrationServer();
		server.start();
	}
	
	@AfterClass
	public static void tearDownClass() {
		server.shutdown();
	}
	
	@Test
	public void testServerReplyToCommit() {
		TestHook hook = new TestHook();
		String reply = hook.sendRequest("http://localhost:8080", "commit");
		assertNotNull(reply);
	}
	
	@Test
	public void testServerUpdateCommitsTable() {
		//HansoftAdapter adapter = Mockito.mock(HansoftAdapter.class);
		//server.setAdapter(adapter);
		TestHook hook = new TestHook();
		hook.sendRequest("http://localhost:8080", "commit");
		assertTrue(server.getCommits("bjorn"));
		// recieve - notify - get reply - update sdk - return
		//Mockito.verify(adapter).getUserID("bjorn");
		//fail("Not implemented!");
	}

}
