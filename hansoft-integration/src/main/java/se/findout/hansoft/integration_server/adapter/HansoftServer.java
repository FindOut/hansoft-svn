package se.findout.hansoft.integration_server.adapter;

/**
 * Created by bjorn on 2014-05-16.
 */
public class HansoftServer {
    private String address;
    private int port;

    public HansoftServer() {
        this.address = "localhost";
        this.port = 50256;
    }

    public HansoftServer(String hansoftAddress, int hansoftPort) {
        this.address = hansoftAddress;
        this.port = hansoftPort;
    }

    public String getURL() {
        return address;
    }

    public void setURL(String URL) {
        this.address = URL;
    }

    public int getPort() {
        return port;
    }

    public void setPort(int port) {
        this.port = port;
    }
}
