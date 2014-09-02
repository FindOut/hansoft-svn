package se.findout.hansoft.integration_server;

public class Utilities {
    
    public static void debug(String message) {
        String debugProperty = IntegrationServer.getProperty("debug");
        if (debugProperty != null && debugProperty.equalsIgnoreCase("true")) {
            System.out.println("DEBUG:" + message);
        }
    }

}
