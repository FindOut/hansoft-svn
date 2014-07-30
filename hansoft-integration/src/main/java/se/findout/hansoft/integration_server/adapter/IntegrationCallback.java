package se.findout.hansoft.integration_server.adapter;

import se.hansoft.hpmsdk.EHPMError;
import se.hansoft.hpmsdk.HPMChangeCallbackData_CommunicationChannelPacketReceived;
import se.hansoft.hpmsdk.HPMSdkCallbacks;

public class IntegrationCallback extends HPMSdkCallbacks{
	private long sessionID = 0;
	
	@Override
	public void On_ProcessError(EHPMError error) {
		System.err.println("Error returned from Hansoft SDK with no: " + error.getValue());
	}
	
	@Override
	public void On_CommunicationChannelPacketReceived(HPMChangeCallbackData_CommunicationChannelPacketReceived packet) {
		sessionID = packet.m_FromSessionID;
	}
	
	public long getSessionID() {
		return sessionID;
	}
}
