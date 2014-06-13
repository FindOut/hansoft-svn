CC	= g++
CFLAGS	= -g
LDFLAGS	= -pthread -ldl
SDK_LOCATION = ../HansoftSDK_7_502
HPMSDK_FILE = Linux2.6/HPMSdk.x64.so

all: setup plugin.so publish_plugin

plugin.so: HPMSdkCpp.o
	$(CC)  -Wall -c -fPIC  -I $(SDK_LOCATION) -o $@ src/HansoftSVNPlugin.cpp $< $(LDFLAGS) -shared

publish_plugin: HPMSdkCpp.o
	$(CC) -Wall -I $(SDK_LOCATION) -o $@ src/HansoftSVNPusher.cpp $< $(LDFLAGS)

setup:
	cp $(SDK_LOCATION)/$(HPMSDK_FILE) .

HPMSdkCpp.o: $(SDK_LOCATION)/HPMSdkCpp.cpp
	$(CC) $(CFLAGS) -c -fPIC -o $@ $<