package se.findout.hansoft.integration_server;

import java.io.IOException;
import java.net.URI;

import org.glassfish.grizzly.http.server.HttpServer;
import org.glassfish.jersey.grizzly2.httpserver.GrizzlyHttpServerFactory;
import org.glassfish.jersey.server.ResourceConfig;

public class IntegrationServer {

    public static void main(String[] args) throws IOException {
    	IntegrationServer is = new IntegrationServer();
    	is.start();
    	System.out.println("Server started!\nPress any button to shut down!");
    	System.in.read();
    	is.shutdown();
   }

	private HttpServer server;
    
	public void start() {
		final ResourceConfig rc = new ResourceConfig().packages("se.findout.hansoft.integration_server.handlers");
		server = GrizzlyHttpServerFactory.createHttpServer(URI.create("http://localhost:8080"), rc);
	}

	public void shutdown() {
		server.shutdown();
	}
}
