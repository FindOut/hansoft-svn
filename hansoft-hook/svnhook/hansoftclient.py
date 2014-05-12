#!/usr/bin/env python

# Subversion Post-Commit hook for hansoft integration.

import sys
from ConfigParser import SafeConfigParser
from httplib import HTTPConnection
from urllib import urlencode

OK_REPLY = 1

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
        print self.url

    def setup_connection(self):
        self.connection = HTTPConnection(self.url, self.port)

    def handle_commit(self, path, revision):
        request_args = self.send_request('bjorn', 1)

    def send_request(self, user, revision):
        header = {"Content-type": "application/x-www-form-urlencoded", "Accept": "text/plain"}
        content = {'@author': user, '@revision': revision}
        self.connection.request("POST", "/commit", urlencode(content), header)
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
    hansoft.handle_commit(sys.argv[1], sys.argv[2])

    # Print debug message
    #sys.stderr.write(','.join(sys.argv))

    # Manually fail
    #exit(1)

# Initialise main method
if __name__ == '__main__':
    main()