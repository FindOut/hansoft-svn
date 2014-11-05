package se.findout.hansoft.integration_server.model;

import static org.junit.Assert.*;

import org.junit.Before;
import org.junit.Test;

public class CommitTest {

    private String commitLine;
    private String message;
    private Commit commit;

    @Before
    public void setUp() throws Exception {
        commitLine = "r503 | fredrik | 2014-10-29 14:59:26 +0100 (Wed, 29 Oct 2014) | 15 lines";
        message = "Death to all fanatics!";
        commit = new Commit(commitLine);
    }

    @Test
    public void testCommitString() {
        assertEquals(503, commit.getRevision());
        assertEquals("fredrik", commit.getAuthor());
        assertEquals("2014-10-29 14:59:26 +0100 (Wed, 29 Oct 2014)", commit.getTimestamp());
    }

    @Test
    public void testGetPath() {
        assertEquals(null, commit.getPath());
    }

    @Test
    public void testGetRevision() {
        assertEquals(503, commit.getRevision());
    }

    @Test
    public void testGetAuthor() {
        assertEquals("fredrik", commit.getAuthor());
    }

    @Test
    public void testGetTimestamp() {
        assertEquals("2014-10-29 14:59:26 +0100 (Wed, 29 Oct 2014)", commit.getTimestamp());
    }

}
