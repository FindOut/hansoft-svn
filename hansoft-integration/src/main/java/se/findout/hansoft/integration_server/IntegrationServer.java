package se.findout.hansoft.integration_server;

import org.glassfish.grizzly.http.server.HttpServer;
import org.glassfish.jersey.grizzly2.httpserver.GrizzlyHttpServerFactory;
import org.glassfish.jersey.server.ResourceConfig;
import se.findout.hansoft.integration_server.adapter.AdapterBinder;
import se.findout.hansoft.integration_server.adapter.HansoftAdapter;

import javax.inject.Inject;
import java.io.IOException;
import java.net.URI;

public class IntegrationServer {

    public static void main(String[] args) throws IOException {
    	IntegrationServer is = new IntegrationServer();
    	is.start();
    	System.out.println("Server started!\nPress any button to shut down!");
    	System.in.read();
    	is.shutdown();
   }

    @Inject
    HansoftAdapter adapter;

	private HttpServer server;
    
	public void start() {
		final ResourceConfig rc = new ResourceConfig().packages("se.findout.hansoft.integration_server.handlers");
        rc.register(new AdapterBinder());
		server = GrizzlyHttpServerFactory.createHttpServer(URI.create("http://localhost:9005"), rc);
	}

	public void shutdown() {

        server.shutdown();
	}

	public void setAdapter(HansoftAdapter adapter) {
		// TODO Auto-generated method stub
		
	}

    public boolean getCommits(String user) {
        return true;
    }
}
