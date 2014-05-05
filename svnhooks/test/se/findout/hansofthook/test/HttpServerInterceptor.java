package se.findout.hansofthook.test;

import java.net.InetSocketAddress;

import org.junit.rules.ExternalResource;

import com.sun.net.httpserver.HttpHandler;
import com.sun.net.httpserver.HttpServer;
@SuppressWarnings("restriction")
public class HttpServerInterceptor extends ExternalResource {

    private final InetSocketAddress address;

    private HttpServer httpServer;

    public HttpServerInterceptor(final int port) {
        this.address = new InetSocketAddress(port);
    }

    protected final void before() throws Throwable {
        super.before();
        httpServer = HttpServer.create(address, 0);
        httpServer.start();
    }

    protected final void after() {
        httpServer.stop(0);
        super.after();
    }
    
    public void addHandler(String path, HttpHandler handler) {
        httpServer.createContext(path, handler);
    }
}