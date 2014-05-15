package se.findout.hansoft.integration_server;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;

import org.glassfish.jersey.client.ClientResponse;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import se.findout.hansoft.integration_server.handlers.CommitHandler;
import se.findout.hansoft.integration_server.model.Commit;

import javax.ws.rs.core.Form;

public class IntegrationServerTest {

	private static IntegrationServer server;
    private Form items;

    @BeforeClass
	public static void setupClass() {
		server = new IntegrationServer();
		server.start();
	}
	
	@AfterClass
	public static void tearDownClass() {
        server.shutdown();
	}

    @Before
    public void setup() {
        // 'author': 'bjorn', 'revision': 1, 'path': '/home/svn/testproject/'
        items = new Form();
        items.param("author", "bjorn");
        items.param("revision", "1");
        items.param("path", "/home/svn/testproject/");
    }
	
	@Test
	public void testServerReplyToCommit() {
        //
		TestHook hook = new TestHook();
		ClientResponse reply = hook.sendPost("http://localhost:9005", "commit", items);
		assertEquals(200, reply.getStatus());
	}
	
	@Test
	public void testServerUpdateCommitsTable() {
        CommitHandler handler = new CommitHandler();
        String response = handler.postCommit(new Commit());
		//HansoftAdapter adapter = Mockito.mock(HansoftAdapter.class);
		//server.setAdapter(adapter);
		//TestHook hook = new TestHook();
		//hook.sendPost("http://localhost:9005", "commit", items);
		//assertTrue(server.getCommits("bjorn"));
		// recieve - notify - get reply - update sdk - return
		//Mockito.verify(adapter).getUserID("bjorn");
		//fail("Not implemented!");
	}

}
