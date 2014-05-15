package se.findout.hansoft.integration_server;

import org.glassfish.jersey.client.ClientResponse;
import se.findout.hansoft.integration_server.model.Commit;

import javax.ws.rs.client.*;
import javax.ws.rs.core.Form;
import javax.ws.rs.core.MediaType;

public class TestHook {

	public ClientResponse sendPost(String host, String path, Form items) {
		Client client = ClientBuilder.newClient();
//        //client.getConfiguration().se
//        client.configuration().enable(new JsonFeature());
		WebTarget target = client.target(host);
//		String input = "{'author': 'bjorn', 'revision': 1, 'path': '/home/svn/testproject/'}";
        Commit c = new Commit("bjorn", 1, "/a/path");
//		Invocation.Builder invocationBuilder =
//		        target.request(MediaType.APPLICATION_JSON);
//		invocationBuilder.header("Content-type", MediaType.APPLICATION_JSON);
//
//        Entity e = Entity.json(c.toString());
//        Response response = invocationBuilder.post(e);


        ClientResponse response = target.path("/commit")
                .request(MediaType.APPLICATION_JSON_TYPE)
                .post(Entity.json(c.toString()),
                        ClientResponse.class);
        return response;
	}

}
