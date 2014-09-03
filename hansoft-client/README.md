#Hansoft-client
The client concist of two parts, one that publishes the client to a Hansoft server, and the actual plugin.  
To publish the plugin you need to create an special SDK user It is possible to use the same SDK user that the Integration Server uses.  
The plugin will communicate entirely through Hansofts internal channels.

The pusher is called HansoftSVNPusher, it requires that the Hansoft server is running in order to upload the plugin. To install the plugin a client is required to log in to Hansoft, it will then install itself automatically.

The plugin is called HansoftSVNPlugin and is distributet as a dynamic library. The plugin will register itself to the integration servers communicationchannel when logging in, it will then wait for a signal from the server and display a popup window with selectable tasks. 

###Dependencies
C++  
Hansoft SDK  
Gnu make (for building)

###Installation
The program is built with the command 
```shell
  make clean all
```
Next, edit the file plugin.properties to reflect your environment.
Then upload the client plug-in with
```shell
  ./HansoftSVNPusher
```
