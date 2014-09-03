/**
* Copyright (c) - placeholder
*
*/

#ifndef HANSOFTSVNPLUGIN_H_
#define HANSOFTSVNPLUGIN_H_
#include "HansoftSVNCommon.h"
#include <HPMSdkCpp.h>
class HansoftSVNPusher : public HPMSdk::HPMSdkCallbacks {
public:
    STD_STRING server;
    const HS_CHAR *database;
    int port;
    const HS_CHAR *sdkuser;
    const HS_CHAR *sdkpassword;

	HansoftSVNPusher();
	virtual ~HansoftSVNPusher();
	virtual void On_ProcessError(HPMSdk::EHPMError _Error);

	void initializeSDK();
	void push();
	void shutDown();

	bool InitConnection();
	void DestroyConnection();
	void DeleteVersionControlFile(HPMSdk::HPMString _File);
	void AddVersionControlFile(HPMSdk::HPMString _File, HPMSdk::HPMString _FileLocal);
	void DoAddVersionControlFile(HPMSdk::HPMString path, HPMSdk::HPMString lib);
	void UpdateServer(bool updateAllPlatforms, bool onlyDelete);
	int Run(bool updateAllPlatforms, bool onlyDelete);
	void Update(bool updateAllPlatforms, bool onlyDelete);
private:
	HPMSdk::HPMSdkSession *m_pSession;

};

#endif /* HANSOFTSVNPLUGIN_H_ */
