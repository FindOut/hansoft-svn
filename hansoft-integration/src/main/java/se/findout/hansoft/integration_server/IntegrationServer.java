package se.findout.hansoft.integration_server;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.URI;
import java.util.Properties;

import org.glassfish.grizzly.http.server.HttpServer;
import org.glassfish.jersey.grizzly2.httpserver.GrizzlyHttpServerFactory;
import org.glassfish.jersey.server.ResourceConfig;

import se.findout.hansoft.integration_server.adapter.AdapterBinder;

public class IntegrationServer {
    
    static Properties properties = new Properties();
    public static boolean debug = false;

    public static void main(String[] args) throws IOException {
        String propertyFile = System.getProperty("user.dir")
                + File.separator + "server.properties";
        for (int i = 0; i < args.length; i++) {
            if (!args[i].startsWith("-")) {
                // no flag - assume property-file
                propertyFile = args[i];
            } else if (args[i].equals("-debug")) {
                debug = true;
            } else {
                // do nothing for now
            }
        }
        loadProperties(propertyFile);

    	IntegrationServer is = new IntegrationServer();
    	is.start();
    	System.out.println("Server started!");
    	waitForShutdown();
    	is.shutdown();
   }

    private static void waitForShutdown() throws IOException {
        do {
            System.out
                    .println("Press any button to shut down!");
            System.in.read();
            System.out.print("Shutdown [Y/n]? ");
            int key = System.in.read();
            if (key == 'Y' || key == 'y') {
                return;
            }
            System.out.println("Continuing...");
        } while (true);
    }

    private static void loadProperties(String propertyFile) {
	     try {
	            File mapFile = new File(propertyFile);
	            FileInputStream fileInput = new FileInputStream(mapFile);
	            properties.load(fileInput);
	            Utilities.debug("Integration server - prop count: " + properties.size());
	            fileInput.close();
	        } catch (FileNotFoundException e) {
	            System.err
	                    .println("!!! Could not locate file: "
	                            + propertyFile);
	        } catch (IOException e) {
	            System.err
	                    .println("!!! Failed to load properties from: "
	                            + propertyFile);
	        } 
    }

    private HttpServer server;
    
	public void start() {
		final ResourceConfig rc = new ResourceConfig().packages("se.findout.hansoft.integration_server.handlers");
        rc.register(new AdapterBinder());
		server = GrizzlyHttpServerFactory.createHttpServer(URI.create("http://0.0.0.0:9005"), rc);
		//server = GrizzlyHttpServerFactory.createHttpServer(URI.create("http://localhost:9005"), rc);
	}

	public void shutdown() {

        server.shutdown();
	}

    public boolean getCommits(String user) {
        return true;
    }

    public static String getProperty(String key) {
        return properties.getProperty(key);
    }
}
