CC	= g++
CFLAGS	= -g
LDFLAGS	= -pthread -ldl

all: Plugin.so HansoftSDKSample_ClientPluginCpp
	cp ../../Linux2.6/HPMSdk.x64.so .	

Plugin.so: HPMSdkCpp.o HansoftSDKSample_ClientPluginCppPlugin.o
	$(CC) -o $@ $^ -shared

HansoftSDKSample_ClientPluginCpp: HPMSdkCpp.o HansoftSDKSample_ClientPluginCpp.o
	$(CC) -o $@ $^ $(LDFLAGS)

HPMSdkCpp.o: ../../HPMSdkCpp.cpp
	$(CC) $(CFLAGS) -c -fPIC -o $@ $<

HansoftSDKSample_ClientPluginCppPlugin.o: HansoftSDKSample_ClientPluginCppPlugin.cpp
	$(CC) $(CFLAGS) -c -fPIC -o $@ $<

HansoftSDKSample_ClientPluginCpp.o: HansoftSDKSample_ClientPluginCpp.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f HansoftSDKSample_ClientPluginCpp HansoftSDKSample_ClientPluginCpp.o HPMSdkCpp.o HansoftSDKSample_ClientPluginCppPlugin.o Plugin.so HPMSdk.x64.so
