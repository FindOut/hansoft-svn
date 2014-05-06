package se.findout.hansoft.svn_hook;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNull;

import java.io.IOException;
import java.net.HttpURLConnection;

import org.junit.Before;
import org.junit.Rule;
import org.junit.Test;

import se.findout.hansoft.svn_hook.HansoftHook;

import com.sun.net.httpserver.HttpExchange;
import com.sun.net.httpserver.HttpHandler;

@SuppressWarnings("restriction")
public class HansoftHookTest {
	
	private HansoftHook hook;

	@Before
	public void setup() {
		hook = new HansoftHook();
	    //hook.setAuthor("bjorn");
	    //hook.setTask(1);
	}
	
	@Rule
	public HttpServerInterceptor httpServer = new HttpServerInterceptor(8000);
	
	@Test
	public void testSendRequestToIntegrationServer() throws Exception {
		HttpHandler handler = new HttpHandler() {

	        public void handle(HttpExchange exchange) throws IOException {
	            byte[] response = "\"append\": \"Hansoft-URL: hansoft://hansoftserver/Task/1\""
	                    .getBytes();
	            exchange.sendResponseHeaders(HttpURLConnection.HTTP_OK, response.length);
	            exchange.getResponseBody().write(response);
	            exchange.close();
	        }
	    };
	    httpServer.addHandler("/commit", handler);

	    String append = hook.sendRequest("http://localhost:8000");
	    assertEquals("\"append\": \"Hansoft-URL: hansoft://hansoftserver/Task/1\"", append);
	}

	@Test
	public void testTimeOutReturnsNull() {
	    String append = hook.sendRequest("http://localhost:8000");
	    assertNull(append);
	}
}
