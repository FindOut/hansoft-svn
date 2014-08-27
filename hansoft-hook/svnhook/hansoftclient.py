#!/usr/bin/env python

# Subversion Post-Commit hook for hansoft integration.

import sys
import subprocess
from ConfigParser import SafeConfigParser
from httplib import HTTPConnection
import json
from objc import nil

OK_REPLY = 1


# svnlook author -r 8 /home/svn/testproject/
def external_get_author(path, revision):
    args = ['svnlook', 'author', '-r'+revision, path]
    p = subprocess.Popen(' '.join(args), stdout=subprocess.PIPE, shell=True)
    (output, err) = p.communicate()
    p.wait()
    return output

def external_get_message(path, revision):
    args = ['svnlook', 'log', '-r'+revision, path]
    p = subprocess.Popen(' '.join(args), stdout=subprocess.PIPE, shell=True)
    (output, err) = p.communicate()
    p.wait()
    return output


class HansoftClient:
    FAIL_REPLY = -1
    OK_REPLY = 1

    # Init method, initializes program using configfile
    def __init__(self, config_file=None):
        #setup
        self.connection = None
        # Setup from config
        config = SafeConfigParser({'url': 'localhost', 'port': '9005'})
        config.add_section('IntegrationServer')
        if config_file is not None:
            config.read(config_file)
        self.url = config.get('IntegrationServer', 'url')
        self.port = config.getint('IntegrationServer', 'port', )
        # DEBUG:
        sys.stderr.write("Integration Server: %s\n" % 
                         config.get('IntegrationServer', 'url'))

    def setup_connection(self):
        self.connection = HTTPConnection(self.url, self.port)

    def handle_commit(self, path, revision):
        author = external_get_author(path, revision)
        message = external_get_message(path, revision)
        result = self.send_request(author, revision, path, message)
        return result

    def send_request(self, user, revision, path, message):
        header = {"Content-type": "application/json", "Accept": "text/plain"}
        content = {'author': user, 'revision': revision, 'path': path, 'message': message}
        try:
            self.connection.request("POST", "/commit", json.dumps(content), header)
            response = self.connection.getresponse()
        except:
            return None
        return response


def main():
    # Example output from svn post-commit
    # /home/svn/testproject/hooks/post-commit /home/svn/testproject 8 7-8
    conf_file = None
    # optional configuration file path
    if len(sys.argv) > 5:
        conf_file = sys.argv[5]
    hansoft = HansoftClient(conf_file)
    hansoft.setup_connection()
    response = hansoft.handle_commit(sys.argv[2], sys.argv[3])
    if response is None:
        sys.stderr.write('Failed to connect the the Hansoft/SVN integration server') 
        exit(1)
    if response.status is not 200:
        sys.stderr.write('Failed when trying to integrate with Hansoft\n')
        sys.stderr.write(response.reason)
        sys.stderr.write('\nurl: %s\n' % hansoft.url)
        sys.stderr.write('port: %s\n' % hansoft.port)
        exit(response.status)

# Initialize main method
if __name__ == '__main__':
    main()
