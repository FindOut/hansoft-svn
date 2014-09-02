package se.findout.hansoft.integration_server.adapter;

/**
 * Created by bjorn on 2014-05-15.
 */

import javax.inject.Singleton;

import org.glassfish.hk2.utilities.binding.AbstractBinder;

import se.findout.hansoft.integration_server.IntegrationServer;

public class AdapterBinder extends AbstractBinder {

    private String hansoftServer;
    
    public AdapterBinder(String hansoftServer) {
        this.hansoftServer = hansoftServer;
    }

    @Override
    protected void configure() {
    	HansoftAdapter adapter = new HansoftAdapter();
        HansoftServer server = new HansoftServer();
        server.setURL(hansoftServer);
        Credentials sdkUser = new Credentials();
        String sdkUsername = IntegrationServer.getProperty("HANSOFT_SDK_USERNAME");
        String sdkPassword = IntegrationServer.getProperty("HANSOFT_SDK_PASSWORD");
        String sdkDatabase = IntegrationServer.getProperty("HANSOFT_DATABASE");
        sdkUser.setUsername(sdkUsername);
        sdkUser.setPassword(sdkPassword);

        try {
			adapter.initialize(server, sdkDatabase, sdkUser);
			adapter.registerChannel();
		} catch (HansoftException e) {
			e.printStackTrace();
		}
    	bind(HansoftAdapter.class).in(Singleton.class);
    	bind(adapter).to(HansoftAdapter.class);
    }
}