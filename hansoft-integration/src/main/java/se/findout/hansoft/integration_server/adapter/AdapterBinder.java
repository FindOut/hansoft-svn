package se.findout.hansoft.integration_server.adapter;

/**
 * Created by bjorn on 2014-05-15.
 */

import javax.inject.Singleton;

import org.glassfish.hk2.utilities.binding.AbstractBinder;

public class AdapterBinder extends AbstractBinder {
    @Override
    protected void configure() {
    	HansoftAdapter adapter = new HansoftAdapter();
        HansoftServer server = new HansoftServer();
        Credentials sdkUser = new Credentials();
        String sdkUsername = System.getenv("HANSOFT_SDK_USERNAME");
        String sdkPassword = System.getenv("HANSOFT_SDK_PASSWORD");
        String sdkDatabase = System.getenv("HANSOFT_DATABASE");
        sdkUser.setUsername(sdkUsername);
        sdkUser.setPassword(sdkPassword);

        try {
			adapter.initialize(server, sdkDatabase, sdkUser);
			adapter.registerChannel();
		} catch (HansoftException e) {
			e.printStackTrace();
		}
    	bind(HansoftAdapter.class).in(Singleton.class);
    	bind(new HansoftAdapter()).to(HansoftAdapter.class);
    }
}