CC	= g++
CFLAGS	= -g
LDFLAGS	= -pthread -ldl
SDK_LOCATION = ../HansoftSDK_7_502
HPMSDK_FILE = Linux2.6/HPMSdk.x64.so

all: setup plugin.so publish_plugin

plugin.so: HPMSdkCpp.o
	$(CC)  -Wall -c -fPIC  -I $(SDK_LOCATION) -o bin/$@ src/HansoftSVNPlugin.cpp bin/$< $(LDFLAGS) -shared

publish_plugin: HPMSdkCpp.o
	$(CC) -Wall -I $(SDK_LOCATION) -o bin/$@ src/HansoftSVNPusher.cpp bin/$< $(LDFLAGS)

setup:
	mkdir bin
	cp $(SDK_LOCATION)/$(HPMSDK_FILE) bin/

HPMSdkCpp.o: $(SDK_LOCATION)/HPMSdkCpp.cpp
	$(CC) $(CFLAGS) -c -fPIC -o bin/$@ $<
	
clean:
	rm -rf bin