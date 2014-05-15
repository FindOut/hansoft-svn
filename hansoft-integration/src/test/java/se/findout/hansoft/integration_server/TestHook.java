package se.findout.hansoft.integration_server;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectMapper;

import javax.ws.rs.client.Client;
import javax.ws.rs.client.ClientBuilder;
import javax.ws.rs.client.Entity;
import javax.ws.rs.client.WebTarget;
import javax.ws.rs.core.MediaType;

import se.findout.hansoft.integration_server.model.Commit;

public class TestHook {

	public String sendPost(String host, String path) throws JsonProcessingException {
        ObjectMapper om = new ObjectMapper();
		Client client = ClientBuilder.newClient();
		WebTarget target = client.target(host);
        Commit c = new Commit("bjorn", 1, "/a/path");

        String output = om.writeValueAsString(c);
        String response = target.path("/commit")
                .request(MediaType.APPLICATION_JSON_TYPE)
                .post(Entity.json(output),
                        String.class);
        return response;
	}

}
