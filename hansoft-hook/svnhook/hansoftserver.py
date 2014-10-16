from BaseHTTPServer import BaseHTTPRequestHandler
from BaseHTTPServer import HTTPServer
from cgi import FieldStorage
import subprocess
from subprocess import check_output
from tempfile import NamedTemporaryFile
from os import remove
import os
import sys
import urlparse

# svnlook propget /home/svn/testproject/ svn:log --revprop -r 7
def external_get_message(path, revision):
    args = ['svnlook', 'propget', path, 'svn:log', '--revprop', '-r'+revision]
    p = subprocess.Popen(' '.join(args), stdout=subprocess.PIPE, shell=True)
    (output, err) = p.communicate()
    p.wait()
    return output


def create_temp_file(msg, url):

    with NamedTemporaryFile(delete=False) as myfile:
        myfile.write(msg)
        myfile.write(url)

    return myfile


# "svnadmin", "setlog", --bypass-hooks /path/to/repo/ -r revNumber commitmsg.txt
def external_change_log(path, revision, file_name):
    args = ['svnadmin', 'setlog', '--bypass-hooks', path, '-r'+revision, file_name]
    subprocess.call(args)


def delete_temp_file(file_name):
    remove(file_name)
    
def debuglog(header, message):
    logmsg = header
    if message != None:
        logmsg += message
    logmsg += "\n"
    # TODO: Location for log file on Windows
    with open('/tmp/hssvn_annotation_server.log', 'a') as f:
        f.write(logmsg)

#class PostHandler(BaseHTTPRequestHandler):
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
        debuglog('Handling POST:', None)
        debuglog('Request: ', request)
        debuglog('URL    : ', url)
        debuglog('Path   : ', path)
        debuglog('Rev    : ', rev)
        
        if path != None:
            self.send_response(200)
            self.end_headers()
            # restore original URL - "protected" ';' etc:        
            url = url.replace("%3B", ";")
    
            msg = external_get_message(path, rev)
            msg += "\n"
            tmp_file = create_temp_file(msg, url)
            external_change_log(path, rev, tmp_file.name)
            delete_temp_file(tmp_file.name)

    def do_GET(self):
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
        
        if self.path == '/repositories':
            self.send_response(200)
            self.end_headers()
            message = 'SVNRepositories:'
            # TODO - implement real repo - get them from a config file
            message += "repo1, repo2, hstestrepo"
            message += "\n"
            self.wfile.write(message)
        elif self.path.startswith('/commits?'):
            self.send_response(200)
            self.end_headers()
            message = 'SVNCommits:'
            # TODO - implement getting commits for the given user for the given repo
            message += "12, 13, 14"
            message += '\n'
            self.wfile.write(message)
        return
#     def do_GET(self):
#         debuglog('Handling GET:')
#         self.send_response(200)
#         self.send_header("Content-type", "text/plain")
#         self.end_headers()
#         repositories = "hsproj2, hstestproject"
#         message = '@SVNREPOSITORIES:' + repositories
#         self.wfile.write(message)
#         debuglog('Sent SVN Repositories: ', repositories)
        

class HansoftServer:

    def __init__(self):
        #self.server = HTTPServer(('0.0.0.0', 9006), PostHandler)
        self.server = HTTPServer(('0.0.0.0', 9006), RequestHandler)
        #self.server = HTTPServer(('localhost', 9006), PostHandler)

    def start(self):
        self.server.serve_forever()

    def stop(self):
        self.server.server_close()


def main():
    print "Starting Hansoft/Subversion annotation server press ctrl + C to stop"
    s = HansoftServer()
    try:
        s.start()
    except KeyboardInterrupt:
        s.stop()
        exit(0)

# Initialise main method
if __name__ == '__main__':
    main()
