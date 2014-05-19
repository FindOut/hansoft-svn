package se.findout.hansoft.integration_server.handlers;

import de.akquinet.jbosscc.needle.annotation.ObjectUnderTest;
import de.akquinet.jbosscc.needle.junit.NeedleRule;
import de.akquinet.jbosscc.needle.mock.EasyMockProvider;
import org.easymock.EasyMock;
import org.junit.Rule;
import org.junit.Test;
import se.findout.hansoft.integration_server.adapter.HansoftAdapter;
import se.findout.hansoft.integration_server.model.Commit;
import se.hansoft.hpmsdk.HPMSdkException;
import se.hansoft.hpmsdk.HPMSdkJavaException;

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
    public void testServerGetsHansoftID() throws HPMSdkException, HPMSdkJavaException {
        EasyMock.expect(mockAdapter.getUserID("Lennart")).andReturn(-1);
        mockProvider.replayAll();
        Commit c = new Commit();
        c.setAuthor("Lennart");
        String reply = handler.postCommit(c);
        mockProvider.verifyAll();
        assertEquals("OK", reply);
    }
}
