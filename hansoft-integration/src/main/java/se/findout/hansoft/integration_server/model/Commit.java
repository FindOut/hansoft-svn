package se.findout.hansoft.integration_server.model;

public class Commit {

    // SVN log: 
    // 
    // r502 | fredrik | 2014-10-29 14:56:38 +0100 (Wed, 29 Oct 2014) | 8 lines
    // <line(s) with message>
    //
    // revision | author | timestamp | numberOfLines
    //
    // 'author': 'bjorn', 'revision': 1, 'path': '/home/svn/testproject/'
    private int revision;      
    private String author;
    private String timestamp;
    private String message = "";
    private String path; // used to capture the path passed from the commit hook
    int lines;

    public static final String COMMIT_FIELD_SEPARATOR = " | ";
    public static final String HANSOFT_URL_PREFIX = "Hansoft-URL: ";

    public Commit() {
    }

    public Commit(String author, int revision, String path, String timestamp, String message) {
        if (author.endsWith("\n")) {
            // Strip trailing "\n"
            author = author.substring(0, author.length() - 1); 
        }

        this.author = author;
        this.revision = revision;
        this.path = path;
        this.message = message;
        this.timestamp = timestamp;
    }
    
    /**
     * Creates a new commit from the first SVN commit line - format:
     * r503 | fredrik | 2014-10-29 14:59:26 +0100 (Wed, 29 Oct 2014) | 15 lines
     * @param commitLine
     */
    public Commit(String commitLine) {
        String rev;
        String user;
        String timestamp;
        
        int sepPos = commitLine.indexOf(COMMIT_FIELD_SEPARATOR);
        int sepPos2 = commitLine.indexOf(COMMIT_FIELD_SEPARATOR, sepPos + COMMIT_FIELD_SEPARATOR.length());
        int sepPos3 = commitLine.indexOf(COMMIT_FIELD_SEPARATOR, sepPos2 + COMMIT_FIELD_SEPARATOR.length());
        rev = commitLine.substring(1, sepPos);
        user = commitLine.substring(sepPos + COMMIT_FIELD_SEPARATOR.length(), sepPos2);
        timestamp = commitLine.substring(sepPos2 + COMMIT_FIELD_SEPARATOR.length(), sepPos3);
        
        this.author = user;
        this.revision = Integer.parseInt(rev);
        this.timestamp = timestamp;
    }

    /**
     * 
     * @param removeAnnotations removes HansoftURL annotation from message
     * @return
     */
    public String getMessage(boolean removeAnnotations) {
        if (removeAnnotations) {
            String strippedMessage = "";
            for (String line : message.split("\n")) {
                if (line.startsWith(HANSOFT_URL_PREFIX) || line.isEmpty()) {
                    continue;
                }
                strippedMessage += line;
            }
            return strippedMessage;
        }
        return message;
    }
    
    public String getMessage() {
        return getMessage(false);
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
    
    public void setTimestamp(String timestamp) {
        this.timestamp = timestamp;
    }
    
    public String getTimestamp() {
        return timestamp;
    }
    
    public int getLines() {
        return lines;
    }
    
    public void setLines(int lines) {
        this.lines = lines;
    }
}
