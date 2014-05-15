package se.findout.hansoft.integration_server;

import com.fasterxml.jackson.core.JsonProcessingException;
import de.akquinet.jbosscc.needle.annotation.ObjectUnderTest;
import de.akquinet.jbosscc.needle.junit.NeedleRule;
import de.akquinet.jbosscc.needle.mock.EasyMockProvider;
import org.easymock.EasyMock;
import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.junit.Rule;
import org.junit.Test;
import se.findout.hansoft.integration_server.adapter.HansoftAdapter;
import se.findout.hansoft.integration_server.handlers.CommitHandler;
import se.findout.hansoft.integration_server.model.Commit;

import javax.inject.Inject;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;

public class IntegrationServerTest {

    @Rule
    public NeedleRule needleRule = new NeedleRule();

    @ObjectUnderTest
    private CommitHandler handler = new CommitHandler();

    @Inject
    private EasyMockProvider mockProvider;

    @Inject
    HansoftAdapter mockAdapter;

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
	public void testServerReplyToCommit() throws JsonProcessingException {
        //
		TestHook hook = new TestHook();
		String reply = hook.sendPost("http://localhost:9005", "commit");
		assertEquals("OK", reply);
	}
	
	@Test
	public void testServerGetsHansoftID() {
        EasyMock.expect(mockAdapter.getUserID("Lennart")).andReturn("Lennart The Man");
        mockProvider.replayAll();
        Commit c = new Commit();
        c.setAuthor("Lennart");
        String reply = handler.postCommit(c);
        mockProvider.verifyAll();
        assertEquals("OK", reply);
	}

}
