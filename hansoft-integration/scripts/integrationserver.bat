set HANSOFT_SDK_PATH=C:\dev\sdks\HansoftSDK_7_502
set HANSOFT_SDK_TARGET=Win32
set HANSOFT_WORKING_DIR=C:\Users\demo\Desktop\hsintegrationserver2

java -Djava.library.path=%HANSOFT_SDK_PATH%\%HANSOFT_SDK_TARGET%\JavaSdkx64\lib -Dfile.encoding=UTF-8 -classpath C:\Users\demo\Desktop\hsintegrationserver2\integrationserver.jar;C:\Users\demo\Desktop\hsintegrationserver2\integrationserver_lib\* se.findout.hansoft.integration_server.IntegrationServer C:\dev\git\hansoft-svn\hansoft-integration\server_windows.properties
