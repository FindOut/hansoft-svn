#Hansoft-hook
Hansoft-hook consists of 2 parts, a client and a server. 

In order to run the hansoft-hook client, you need to connect it to your subversion repository.  
In each subversion repository there is a folder called "hooks", in that folder subversion automatically calls a file called post-commit after a commit is committed to the repositoiry, this file may be written in any script-language or be an executable.

It is possible to rename the Hansoft hook client to post-commit and run it directly, however it is recommended to create a separate script that calls the hansoft client so that it is possible to connect more then one post-commit hook to subversion. 

The server is started separately and listens for calls from the Intogration-Server, it takes the post request and changes subversion commit messages according to the information supplied by the posts.

Make sure that both the server and the client is running from the subversion group so that subversion has acccess to invoke the client and so that the server is allowed to modify commit messages.

###Dependencies
Python 2.X  
subversion

**For Testing**  
python-py.test   
python-mock  
  
##Installation
Create a shell/bat file in the repository/hooks folder called post-commit.  
Call the hansoft-hook client from within the script file like this: 
```shell
  python /path/to/client/hansoftclient.py $1 $2 $3 $4 /path/to/configuration/file.conf
```  

The server is started as a normal python program. The server is terminated by keyboard interrupt (ctrl + c).
