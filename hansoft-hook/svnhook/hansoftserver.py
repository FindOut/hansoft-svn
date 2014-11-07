from BaseHTTPServer import BaseHTTPRequestHandler
from BaseHTTPServer import HTTPServer
from cgi import FieldStorage
import subprocess
#from subprocess import check_output
from tempfile import NamedTemporaryFile
from os import remove
#import os
import sys
import urlparse
from ConfigParser import SafeConfigParser

# global variables
repositories = None

# svnlook propget /home/svn/testproject/ svn:log --revprop -r 7
def external_get_message(path, revision):
    if path.startswith('svn://'):
        args = ['svn', 'propget', '-r'+revision, '--revprop', 'svn:log', path]
    else:
        args = ['svnlook', 'propget', path, 'svn:log', '--revprop', '-r'+revision]
    p = subprocess.Popen(' '.join(args), stdout=subprocess.PIPE, shell=True)
    (output, err) = p.communicate()
    p.wait()
    return output

def external_get_commits(repository, user):
    args = ['svn', 'log', repository]
    output = subprocess.check_output(args)
    return output

# "svnadmin", "setlog", --bypass-hooks /path/to/repo/ -r revNumber commitmsg.txt
def external_change_log(path, revision, file_name):
    if path.startswith('svn://'):
        f = open(file_name)
        message = f.read()
        sys.stderr.write("New commit message: {}\n".format(message))
        f.close()
        args = ['svn', 'propset', '--no-auth-cache', '--non-interactive', 
                '--trust-server-cert', '-r'+revision, '--revprop', 'svn:log', 
                message, path]
    else:
        sys.stderr.write("Using svnadmin...\n")
        args = ['svnadmin', 'setlog', '--bypass-hooks', path, '-r'+revision, 
                file_name]
    debugmessage = ""
    for arg in args:
        debugmessage += arg + ', '
        debuglog("Arg: ", '[' + arg + ']')
    debuglog("Changelog: ", debugmessage)
    subprocess.call(args)

def create_temp_file(msg, url):

    with NamedTemporaryFile(delete=False) as myfile:
        myfile.write(msg)
        myfile.write(url)

    return myfile

def delete_temp_file(file_name):
    remove(file_name)
    
def debuglog(header, message):
    logmsg = header
    if message != None:
        logmsg += message
    logmsg += "\n"
    # TODO: Location for log file on Windows
    #with open('/tmp/hssvn_annotation_server.log', 'a') as f:
    with open(logfile, 'a') as f:
        f.write(logmsg)
        

class RequestHandler(BaseHTTPRequestHandler):
    
    def do_POST(self):
        self.send_response(200)
        self.end_headers()
        # Parse the form data posted
        form = FieldStorage(
            fp=self.rfile,
            headers=self.headers,
            environ={'REQUEST_METHOD': 'POST',
                     'CONTENT_TYPE': self.headers['Content-Type'],
                     })
        # 
        debuglog('Client: ', self.address_string())
        request = form.getvalue('request')
        url = form.getvalue('url')
        path = form.getvalue('path')
        rev = form.getvalue('rev')
        svnurl = form.getvalue('svnurl')
        debuglog('Handling POST:', None)
        debuglog('Request: ', request)
        debuglog('URL    : ', url)
        debuglog('Path   : ', path)
        debuglog('Rev    : ', rev)
        debuglog('SVNURL : ', svnurl)
        
        if path != None:
            # annotate using file path
            self.send_response(200)
            self.end_headers()
            # restore original URL - "protected" ';' etc:        
            url = url.replace("%3B", ";")
    
            msg = external_get_message(path, rev)
            msg += "\n"
            tmp_file = create_temp_file(msg, url)
            external_change_log(path, rev, tmp_file.name)
            delete_temp_file(tmp_file.name)
        elif svnurl != None:
            self.send_response(200)
            self.end_headers()
            # restore original URL - "protected" ';' etc:        
            url = url.replace("%3B", ";")
    
            msg = external_get_message(svnurl, rev)
            msg += "\n"
            tmp_file = create_temp_file(msg, url)
            external_change_log(svnurl, rev, tmp_file.name)
            delete_temp_file(tmp_file.name)

    def do_GET(self):
        print "raw path: %s" % self.path
        parsed_path = urlparse.urlparse(self.path)
        message_parts = [
                'CLIENT VALUES:',
                'client_address=%s (%s)' % (self.client_address,
                                            self.address_string()),
                'command=%s' % self.command,
                'path=%s' % self.path,
                'real path=%s' % parsed_path.path,
                'query=%s' % parsed_path.query,
                'request_version=%s' % self.request_version,
                '',
                'SERVER VALUES:',
                'server_version=%s' % self.server_version,
                'sys_version=%s' % self.sys_version,
                'protocol_version=%s' % self.protocol_version,
                '',
                'HEADERS RECEIVED:',
                ]
        for name, value in sorted(self.headers.items()):
            message_parts.append('%s=%s' % (name, value.rstrip()))
        message_parts.append('')
        message = '\r\n'.join(message_parts)
        debuglog("Message: ", message)
        
#         if self.path == '/repositories':
#             self.send_response(200)
#             self.end_headers()
#             message = 'SVNRepositories:'
#             # TODO - implement real repo - get them from a config file
#             #message += "repo1, repo2, hstestrepo"
#             message += repositories
#             message += "\n"
#             self.wfile.write(message)
        if self.path.startswith('/commits?'):
            # expected URL: /commits?svn_repo_url?user
            # get svn repo path
            splitUrl = parsed_path.query.split("?")
            repoPath = splitUrl[0]
            user = splitUrl[1]
            debuglog("Query   : ", splitUrl[0])
            debuglog("SVN URL : ", repoPath)
            debuglog("SVN User: ", user)
            # get commits
            commits = external_get_commits(repoPath, user)
            
            self.send_response(200)
            self.end_headers()
            message = 'SVNCommits:'
            # TODO - implement getting commits for the given user for the given repo
            #message += "12, 13, 14"
            for commit in commits:
                message += commit # + ";"
            message += '\n'
            self.wfile.write(message)
        return

class HansoftServer:

    def __init__(self, port=9006, config_file=None):
        # Read configuration
        config = SafeConfigParser({'repositories' : None, 'logfile' : None})
        config.add_section('AnnotationServer')
        config.read(config_file)
        if config is None:
            sys.stderr.write("*** Requires configuration file - exiting ***")
            sys.exit(1)
        # store the repositories globally
        global repositories
        repositories = config.get('AnnotationServer', 'repositories')
        global logfile 
        logfile = config.get('AnnotationServer', 'logfile')
        
        # Start the HTTP server:
        self.server = HTTPServer(('0.0.0.0', port), RequestHandler)

    def start(self):
        self.server.serve_forever()

    def stop(self):
        self.server.server_close()


def main():
    print "Starting Hansoft/Subversion annotation server press ctrl + C to stop"
    if len(sys.argv) < 2:
        sys.stderr.write("")
        sys.exit(1)
    port = int(sys.argv[1])
    conf_file = sys.argv[2]
    s = HansoftServer(port, conf_file)
    try:
        s.start()
    except KeyboardInterrupt:
        s.stop()
        exit(0)

# Initialise main method
if __name__ == '__main__':
    main()
