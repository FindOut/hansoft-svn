package se.findout.hansoft.integration_server;

import javax.ws.rs.client.Client;
import javax.ws.rs.client.ClientBuilder;
import javax.ws.rs.client.Invocation;
import javax.ws.rs.client.WebTarget;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;

public class TestHook {

	public String sendRequest(String host, String path) {
		Client client = ClientBuilder.newClient();
		WebTarget target = client.target(host).path(path);
		
		Invocation.Builder invocationBuilder =
		        target.request(MediaType.TEXT_PLAIN_TYPE);
		invocationBuilder.header("", "true");
		Response response = invocationBuilder.get();
		String append = null;
		if(response.getStatus() == 200) {
			append = response.readEntity(String.class);
		}
		return append;
	}

}
