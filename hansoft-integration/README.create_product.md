How to install the Hansoft/Subversion Integration Server
========================================================

Make sure the project is build (mvn clean and then install)
As of writing, the tests may fail - ignore for now.

- In Eclipse, select the hansoft-integration project in the Project Explorer
- File > Export > Runnable Jar file
- Use the "Integration Server - template" launch configuration
- Select "Copy required libraries into a sub-folder next to the generated jar"
- Select a destination

- In Project Explorer, select:
 - scripts/integrationserver.sh
 - server.properties
- File > Export > Export to File system
 - Export to the same folder as the Runnable Jar above
 
- Go to the destination folder
- Edit the script and adjust the environment variables at the top
- Edit the server.properties file to reflect the Hansoft installation

- Start the integration server with:
- ./integrationserver.sh

