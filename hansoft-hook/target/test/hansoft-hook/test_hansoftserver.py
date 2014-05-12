import pytest
from httplib import HTTPConnection
from urllib import urlencode
from threading import Thread

from svnhook.hansoftserver import HansoftServer

class TestHansoftServer:

    def test_receive_reply(self):

        server = HansoftServer()
        t = Thread(target=server.start,)
        t.start()
        connection = HTTPConnection('localhost', 9006)
        content = {'@task': 1, '@url': 'http://testurl'}
        connection.request("POST", "/post", urlencode(content), {"Content-type": "application/x-www-form-urlencoded", "Accept": "text/plain"})
        reply = connection.getresponse()
        assert reply.status == 200
        server.server.shutdown()