package se.findout.hansoft.integration_server.adapter;

import java.util.HashMap;

import se.hansoft.hpmsdk.EHPMError;
import se.hansoft.hpmsdk.HPMChangeCallbackData_CommunicationChannelPacketReceived;
import se.hansoft.hpmsdk.HPMSdkCallbacks;

public class IntegrationCallback extends HPMSdkCallbacks{
	private HashMap<String, Long> sessions;
	
	public IntegrationCallback() {
		sessions = new HashMap<String, Long>();
	}
	
	@Override
	public void On_ProcessError(EHPMError error) {
		System.err.println("Error returned from Hansoft SDK with no: " + error.getValue());
	}
	
	@Override
	public void On_CommunicationChannelPacketReceived(HPMChangeCallbackData_CommunicationChannelPacketReceived packet) {
		long sessionID = packet.m_FromSessionID;
		String name = "";
		for(int i=0; i < packet.m_Packet.m_Bytes.length; ++i) {
			if(packet.m_Packet.m_Bytes[i] == 0) {
				name = new String(packet.m_Packet.m_Bytes, 0 , i);
				break;
			}
		}
		sessions.put(name, sessionID);
	}
	
	public long getSessionID(String user) {
		try {
			return sessions.get(user);
		} catch (NullPointerException e) {
			System.err.println("User " + user + " not found!\n");
			return 0;
		}
	}
}
