package se.findout.hansoft.integration_server.adapter;

/**
 * Created by bjorn on 2014-05-16.
 */
public class HansoftServer {
    private String URL;
    private int port;

    public HansoftServer() {
        this.URL = "localhost";
        this.port = 50256;
    }

    public HansoftServer(String hansoftAddress, int hansoftPort) {
        this.URL = hansoftAddress;
        this.port = hansoftPort;
    }

    public String getURL() {
        return URL;
    }

    public void setURL(String URL) {
        this.URL = URL;
    }

    public int getPort() {
        return port;
    }

    public void setPort(int port) {
        this.port = port;
    }
}
