CC	= g++
CFLAGS	= -g
LDFLAGS	= -pthread -ldl

all: HansoftSDKSample_Simple
	cp ../../Linux2.6/HPMSdk.x64.so	.
	
HansoftSDKSample_Simple: HPMSdk.o HansoftSDKSample_Simple.o
	$(CC) -o $@ $^ $(LDFLAGS)

HPMSdk.o: ../../HPMSdk.c
	$(CC) $(CFLAGS) -c -o $@ $<

HansoftSDKSample_Simple.o: HansoftSDKSample_Simple.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f HansoftSDKSample_Simple HansoftSDKSample_Simple.o HPMSdk.o
