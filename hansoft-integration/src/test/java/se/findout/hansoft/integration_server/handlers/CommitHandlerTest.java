package se.findout.hansoft.integration_server.handlers;

import de.akquinet.jbosscc.needle.annotation.ObjectUnderTest;
import de.akquinet.jbosscc.needle.junit.NeedleRule;
import de.akquinet.jbosscc.needle.mock.EasyMockProvider;
import org.easymock.EasyMock;
import org.junit.Rule;
import org.junit.Test;
import se.findout.hansoft.integration_server.adapter.HansoftAdapter;
import se.findout.hansoft.integration_server.adapter.HansoftException;
import se.findout.hansoft.integration_server.model.Commit;

import javax.inject.Inject;

import static org.junit.Assert.assertEquals;

public class CommitHandlerTest {
    @Rule
    public NeedleRule needleRule = new NeedleRule();

    @ObjectUnderTest
    private CommitHandler handler = new CommitHandler();

    @Inject
    private EasyMockProvider mockProvider;

    @Inject
    HansoftAdapter mockAdapter;

    @Test
    public void testServerGetsHansoftID() throws HansoftException {
        int lennart = 21;
        Commit c = new Commit();
        c.setAuthor("Lennart");
        c.setRevision(1);

        EasyMock.expect(mockAdapter.getUserID("Lennart")).andReturn(lennart);
        mockAdapter.signalCommitPerformed(lennart, Integer.toString(c.getRevision()));
        EasyMock.expectLastCall();
        mockProvider.replayAll();

        String reply = handler.postCommit(c);
        mockProvider.verifyAll();
        assertEquals("OK", reply);
    }
}
