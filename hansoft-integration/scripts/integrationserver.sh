#!/bin/bash
#
# Launch script for the Hansoft/Subversion Integration Server
#
# NOTE: Edit the environment variables below to reflect the setup of 
#       the environment in which the server is installed:
#
export HANSOFT_SDK_PATH=/Users/fredrik/dev/SDKs/Hansoft/HansoftSDK_7_502
export HANSOFT_SDK_TARGET=OSX10.7
export HANSOFT_WORKING_DIR=/Users/fredrik/tmp/hsintegrationserver

#
# The lines below should be fine as is:
#
HANSOFT_SDK_OSX=$HANSOFT_SDK_PATH/$HANSOFT_SDK_TARGET
export DYLD_LIBRARY_PATH=$HANSOFT_SDK_OSX/JavaSdkx64/lib:$HANSOFT_SDK_OSX

java -Djava.library.path=$HANSOFT_SDK_PATH/$HANSOFT_SDK_TARGET/JavaSdkx64/lib -Dfile.encoding=UTF-8 -classpath \
 $HANSOFT_WORKING_DIR/integrationserver.jar:$HANSOFT_WORKING_DIR/jars/* \
 se.findout.hansoft.integration_server.IntegrationServer server.properties

