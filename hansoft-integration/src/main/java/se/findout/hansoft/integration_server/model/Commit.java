package se.findout.hansoft.integration_server.model;

import javax.xml.bind.annotation.XmlRootElement;

/**
 * Created by bjorn on 2014-05-14.
 */

// 'author': 'bjorn', 'revision': 1, 'path': '/home/svn/testproject/'
public class Commit {
    public String author;
    public int revision;
    public String path;

    public Commit() {

    }

    public Commit(String author, int revision, String path) {
        this.author = author;
        this.revision = revision;
        this.path = path;
    }
}
