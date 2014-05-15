package se.findout.hansoft.integration_server.adapter;

/**
 * Created by bjorn on 2014-05-15.
 */

import org.glassfish.hk2.utilities.binding.AbstractBinder;

public class AdapterBinder extends AbstractBinder {
    @Override
    protected void configure() {
        bind(HansoftAdapter.class).to(HansoftAdapter.class);
    }
}