package se.findout.hansoft.integration_server;

import static org.junit.Assert.*;

import org.junit.Test;

public class IntegrationServerTest {

	@Test
	public void testServerReplyOKtoInit() {
		IntegrationServer server = new IntegrationServer();
		server.start();
		TestHook hook = new TestHook();
		String reply = hook.sendRequest("http://localhost:8080", "commit");
		assertNotNull(reply);
		server.shutdown();
	}

}
