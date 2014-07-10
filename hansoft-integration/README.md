#Hansoft-Integration
The integration server can either run on the same machine as the Hansoft server, or on a separate machine. It communicates with the subversion hook through HTTP and with hansoft and the clients through the Hansoft SDK.

In order to use the Integration server an SDK user needs to be created. This is done from within Hansoft.

###Dependencies
java (Tested with java7)  
maven 2.x  
Hansoft development SDK

maven will automatically download the other dependencies. refer to pom.xml for a complete list of dependencies downloaded.

###Installation
```shell

LINUX:
  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:<HansoftSDKroot>/<HostOSVersion>/<JavaSdkVersion>/lib>
OSX:
  export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:<HansoftSDKroot>/<HostOSVersion>/<JavaSdkVersion>/lib>
WINDOWS:
  TBD...


# Add hansoft SDK artifacts to your local mvn repo:
cd <HansoftSDKroot>/<HostOSVersion>/<JavaSdkVersion>/lib>
# 1. Add Java (for each platform: osx, win32, win64, linux32, linux64):
mvn install::install-file -Dfile=hpmsdk.jar -DgroupId=com.hansoft.sdk.lib -DartifactId=hansoft-lib -Dversion=7.5.0.2 -Dpackaging=jar -Dclassifier=osx
# 2. Add native
cd <SDKdir>/<platform>
# edit to match dynlibs etc on the given platform:
jar cvf hpmsdk-native.jar HPMSdk.x64.dylib JavaSdkx64/lib/*
# edit -Dclassifier to match the given platform, eg {osx, win32, linux64, linux32?}:
mvn install::install-file -Dpackaging=jar -DgroupId=com.hansoft.sdk.lib -Dversion=7.5.0.2 -Dclassifier=osx -DartifactId=hansoft-lib-native -Dfile=hpmsdk-native.jar

cd path/to/hansoft-integration
mvn install
```
