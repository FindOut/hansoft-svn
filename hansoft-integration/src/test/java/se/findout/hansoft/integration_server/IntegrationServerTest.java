package se.findout.hansoft.integration_server;

import static org.junit.Assert.*;

import org.junit.Test;

import se.findout.hansoft.svn_hook.*;

public class IntegrationServerTest {

	@Test
	public void testServerReplyOKtoInit() {
		IntegrationServer server = new IntegrationServer();
		server.start();
		HansoftHook hook = new HansoftHook();
		String reply = hook.sendRequest("http://localhost:8000");
		assertNotNull(reply);
	}

}
