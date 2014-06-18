#Hansoft-client
The client concist of two parts, one that publishes the client to a Hansoft server, and the actual plugin.  
To publish the plugin you need toi create an special SDK user It is possible to use the same SDK user that the Integration Server uses.  
The plugin will communicate entirely through Hansofts internal channels.

###Dependencies
C++  
Hansoft SDK  
Gnu make (for building)

###Installation
The program is built with the command 
```shell
  make clean all
```
