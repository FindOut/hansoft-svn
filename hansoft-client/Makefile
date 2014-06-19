CC	= g++
CFLAGS	= -g
LDFLAGS	= -pthread -ldl

all: Plugin.so HansoftSVNPusher
	cp ../HansoftSDK_7_502/Linux2.6/HPMSdk.x64.so .

Plugin.so: HPMSdkCpp.o HansoftSVNPlugin.o
	$(CC) -o $@ $^ -shared

HansoftSVNPusher: HPMSdkCpp.o HansoftSVNPusher.o
	$(CC) -o $@ $^ $(LDFLAGS)

HPMSdkCpp.o: ../HansoftSDK_7_502/HPMSdkCpp.cpp
	$(CC) $(CFLAGS) -c -fPIC -o $@ $<

HansoftSVNPlugin.o: src/HansoftSVNPlugin.cpp
	$(CC) $(CFLAGS) -c -fPIC -o $@ $<

HansoftSVNPusher.o: src/HansoftSVNPusher.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
	
clean:
	rm -f HansoftSVNPusher
	rm -f *.so
	rm -f *.o