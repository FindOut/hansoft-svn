###
# Copyright (c) - placeholder
#
### Makefile for building hansoft-client
#

#
# Hansoft SDK Version
SDK_VERSION=HansoftSDK_7_502
#SDK_VERSION=HansoftSDK_8_101

# Platform specific settings
ifeq ($(OS),Windows_NT)
    _CCFLAGS += -D WIN32
    _SDKPLATFORM = Win32
    _SDKEXT = dll
    ifeq ($(PROCESSOR_ARCHITECTURE),AMD64)
        _CCFLAGS += -D AMD64
        _BITARCH = x64
    endif
    ifeq ($(PROCESSOR_ARCHITECTURE),x86)
        _CCFLAGS += -D IA32
        _BITARCH = x86
    endif
else
    UNAME_S := $(shell uname -s)
    ifeq ($(UNAME_S),Linux)
        _CCFLAGS += -D LINUX -fPIC
        _LDFLAGS += -pthread
        _SDKPLATFORM = Linux2.6
        _SDKEXT = so
    endif
    ifeq ($(UNAME_S),Darwin)
        _CCFLAGS += -D OSX
        # SDK version specific defines
        ifeq ($(SDK_VERSION),HansoftSDK_7_502)
        		#Hansoft SDK 7
                _SDKPLATFORM = OSX10.7
        else
                #Hansoft SDK 8
                _SDKPLATFORM = OSX10.6 
        endif
        _SDKEXT = dylib
    endif
    UNAME_M := $(shell uname -m)
    ifeq ($(UNAME_M),x86_64)
    	_FDEBUG = T1
        _CCFLAGS += -D AMD64
        _BITARCH = x64
    endif
    ifneq ($(filter %86,$(UNAME_M)),)
    	_FDEBUG = T2
        _CCFLAGS += -D IA32
        _BITARCH = x86
    endif
    ifneq ($(filter arm%,$(UNAME_PM)),)
        _CCFLAGS += -D ARM
    endif
endif

# SDK version specific defines
ifeq ($(SDK_VERSION),HansoftSDK_7_502)
	_CCFLAGS += -D_HANSOFT_SDK_VERSION_7
else
	_CCFLAGS += -D_HANSOFT_SDK_VERSION_8
endif

# User specific settings
-include UserSettings.mak

# Common settings
CC	= g++
#CFLAGS	= $(_CCFLAGS)
CFLAGS	= -g -D_DEBUG=true  $(_CCFLAGS)
LDFLAGS = -ldl $(_LDFLAGS)
SDKROOT = $(USER_SDKROOT)/$(SDK_VERSION)
SDKPLATFORM = $(_SDKPLATFORM)
SDKLIB = HPMSdk.$(_BITARCH).$(_SDKEXT)

INC = -I$(SDKROOT)

all: Plugin.$(_SDKEXT) HansoftSVNPusher
	cp $(SDKROOT)/$(SDKPLATFORM)/$(SDKLIB) .
	
Plugin.$(_SDKEXT): HPMSdkCpp.o HansoftSVNPlugin.o converter.o
	$(CC) $(INC) -o $@ $^ -shared

HansoftSVNPusher: HPMSdkCpp.o HansoftSVNPusher.o
	$(CC) $(INC) -o $@ $^ $(LDFLAGS)

HPMSdkCpp.o: $(SDKROOT)/HPMSdkCpp.cpp
	$(CC) $(CFLAGS) -c -fPIC -o $@ $<

HansoftSVNPlugin.o: src/HansoftSVNPlugin.cpp src/HansoftSVNPlugin.h src/HansoftSVNCommon.h
	$(CC) $(CFLAGS) $(INC) -c -fPIC -o $@ $<

HansoftSVNPusher.o: src/HansoftSVNPusher.cpp src/HansoftSVNPusher.h src/HansoftSVNCommon.h
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<
	
converter.o:	src/converter.cpp
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<
	
clean:
	rm -f HansoftSVNPusher
	rm -f *.so *.dylib *.dll
	rm -f *.o
	rm -f $(SDKLIB)
	rm -rf FileCache
	rm -rf VersionControl
	rm -rf VersionsSDK
	rm -f WriteRightsCheck
	
