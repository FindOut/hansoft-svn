from BaseHTTPServer import BaseHTTPRequestHandler
from BaseHTTPServer import HTTPServer
from cgi import FieldStorage
import subprocess
from subprocess import check_output
from tempfile import NamedTemporaryFile
from os import remove
import os
import sys

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

class PostHandler(BaseHTTPRequestHandler):

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

        path = form['path'].value
        rev = form['rev'].value
        url = form['url'].value

        sys.stderr.write("Annotated rev %s\n" % rev) # DEBUG
        msg = external_get_message(path, rev)
        tmp_file = create_temp_file(msg, url)
        external_change_log(path, rev, tmp_file.name)
        delete_temp_file(tmp_file.name)


class HansoftServer:

    def __init__(self):
        self.server = HTTPServer(('0.0.0.0', 9006), PostHandler)
        #self.server = HTTPServer(('localhost', 9006), PostHandler)

    def start(self):
        self.server.serve_forever()

    def stop(self):
        self.server.server_close()


def main():
    print "Staring server press ctrl + C to stop"
    s = HansoftServer()
    try:
        s.start()
    except KeyboardInterrupt:
        s.stop()
        exit(0)

# Initialise main method
if __name__ == '__main__':
    main()
