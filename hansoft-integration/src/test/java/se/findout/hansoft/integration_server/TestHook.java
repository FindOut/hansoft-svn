package se.findout.hansoft.integration_server;

import javax.ws.rs.client.*;
import javax.ws.rs.core.Form;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;

public class TestHook {

	public Response sendPost(String host, String path, Form items) {
		Client client = ClientBuilder.newClient();
		WebTarget target = client.target(host).path(path);
		
		Invocation.Builder invocationBuilder =
		        target.request(MediaType.TEXT_PLAIN_TYPE);
		invocationBuilder.header("Content-type", "application/x-www-form-urlencoded");
        invocationBuilder.header("Accept", "text/plain");
        Entity e = Entity.entity(items,MediaType.TEXT_PLAIN_TYPE);
        Response response = invocationBuilder.post(e);
        return response;
	}

}
