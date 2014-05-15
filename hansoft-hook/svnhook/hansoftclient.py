#!/usr/bin/env python

# Subversion Post-Commit hook for hansoft integration.

import sys
import subprocess
from ConfigParser import SafeConfigParser
from httplib import HTTPConnection
import json

OK_REPLY = 1


# svnlook author -r 8 /home/svn/testproject/
def external_get_author(path, revision):
    args = ['svnlook', 'author', '-r'+revision, path]
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

    def setup_connection(self):
        self.connection = HTTPConnection(self.url, self.port)

    def handle_commit(self, path, revision):
        author = external_get_author(path, revision)
        result = self.send_request(author, revision, path)
        return result.status

    def send_request(self, user, revision, path):
        header = {"Content-type": "application/json", "Accept": "text/plain"}
        content = {'author': user, 'revision': revision, 'path': path}
        self.connection.request("POST", "/commit", json.dumps(content), header)
        response = self.connection.getresponse()
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
    status = hansoft.handle_commit(sys.argv[2], sys.argv[3])
    if status is not 200:
        sys.stderr.write('Failed when trying to integrate with Hansoft\n')
        exit(status)

# Initialise main method
if __name__ == '__main__':
    main()