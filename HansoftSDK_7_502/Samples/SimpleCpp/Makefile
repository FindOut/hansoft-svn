CC	= g++
CFLAGS	= -g
LDFLAGS	= -pthread -ldl

all: HansoftSDKSample_SimpleCpp
	cp ../../Linux2.6/HPMSdk.x64.so . 

HansoftSDKSample_SimpleCpp: HPMSdkCpp.o HansoftSDKSample_SimpleCpp.o
	$(CC) -o $@ $^ $(LDFLAGS)

HPMSdkCpp.o: ../../HPMSdkCpp.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

HansoftSDKSample_SimpleCpp.o: HansoftSDKSample_SimpleCpp.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f HansoftSDKSample_SimpleCpp HansoftSDKSample_SimpleCpp.o HPMSdkCpp.o
