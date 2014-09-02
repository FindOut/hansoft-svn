#!/bin/bash

export HANSOFT_SDK_PATH=/Users/fredrik/dev/SDKs/Hansoft/HansoftSDK_7_502
export HANSOFT_SDK_TARGET=OSX10.7
export HANSOFT_SVN_MAPPINGFILE=/Users/fredrik/tmp/hsintegrationserver/HansoftSVNUser.map
export HANSOFT_WORKING_DIR=/Users/fredrik/tmp/hsintegrationserver

HANSOFT_SDK_OSX=$HANSOFT_SDK_PATH/OSX10.7
export DYLD_LIBRARY_PATH=$HANSOFT_SDK_OSX/JavaSdkx64/lib:$HANSOFT_SDK_OSX

java -Djava.library.path=$HANSOFT_SDK_PATH/$HANSOFT_SDK_TARGET/JavaSdkx64/lib -Dfile.encoding=UTF-8 -classpath \
 $HANSOFT_WORKING_DIR/classes:$HANSOFT_WORKING_DIR/jars/* \
 se.findout.hansoft.integration_server.IntegrationServer

