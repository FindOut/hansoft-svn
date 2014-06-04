package se.findout.hansoft.integration_server;

import com.fasterxml.jackson.core.JsonProcessingException;
import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.junit.Test;

import static org.junit.Assert.assertEquals;

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
	// TODO Commented out until adapter is working
//	@Test
//	public void testServerReplyToCommit() throws JsonProcessingException {
//        //
//		TestHook hook = new TestHook();
//		String reply = hook.sendPost("http://localhost:9005", "commit");
//		assertEquals("OK", reply);
//	}
	


}
