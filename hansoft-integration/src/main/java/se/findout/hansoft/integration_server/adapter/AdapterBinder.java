package se.findout.hansoft.integration_server.adapter;

/**
 * Created by bjorn on 2014-05-15.
 */

import javax.inject.Singleton;

import org.glassfish.hk2.utilities.binding.AbstractBinder;

import se.findout.hansoft.integration_server.IntegrationServer;

public class AdapterBinder extends AbstractBinder {
    @Override
    protected void configure() {
    	HansoftAdapter adapter = new HansoftAdapter();
        HansoftServer server = new HansoftServer();
        Credentials sdkUser = new Credentials();
        String sdkUsername = IntegrationServer.getProperty("SDK_USERNAME");
        String sdkPassword = IntegrationServer.getProperty("SDK_PASSWORD");
        String sdkDatabase = IntegrationServer.getProperty("DATABASE");
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