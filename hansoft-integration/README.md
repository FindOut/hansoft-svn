#Hansoft-Integration
The integration server can either run on the same machine as the Hansoft server, or on a separate machine. It communicates with the subversion hook through HTTP and with hansoft and the clients through the Hansoft SDK.

In order to use the Integration server an SDK user needs to be created. This is done from within Hansoft.

###Dependencies
java (Tested with java7)  
maven 2.x  
Hansoft development SDK

maven will automatically downloead the other dependencies. refer to pom.xml for a complete list of dependencies downloaded.

###Installation
```shell
  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:<hansoft/java/sdk/library>
  cd hansoft/java/sdk/library
  mvn install:install-file -Dfile=hpmsdk.jar -DgroupId=com.hansoft.sdk.lib -DartifactId=hansoft-lib -Dversion=1.0 -Dpackaging=jar
  cd path/to/hansoft-integration
  mvn install
```
