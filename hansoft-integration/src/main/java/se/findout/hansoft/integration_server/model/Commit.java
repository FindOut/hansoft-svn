package se.findout.hansoft.integration_server.model;

/**
 * Created by bjorn on 2014-05-14.
 */

// 'author': 'bjorn', 'revision': 1, 'path': '/home/svn/testproject/'
public class Commit {
    private String author;
    private int revision;
    private String path;
    private String message;

    public Commit() {

    }

    public Commit(String author, int revision, String path, String message) {
        if (author.endsWith("\n")) {
            // Strip trailing "\n"
            author = author.substring(0, author.length() - 1); 
        }

        this.author = author;
        this.revision = revision;
        this.path = path;
        this.message = message;
    }

    public String getMessage() {
        return message;
    }
    
    public void setMessage(String message) {
        this.message = message;
    }
    
    public String getPath() {
        return path;
    }

    public void setPath(String path) {
        this.path = path;
    }

    public int getRevision() {
        return revision;
    }

    public void setRevision(int revision) {
        this.revision = revision;
    }

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }
}
