from mock import MagicMock
from mock import Mock
from httplib import HTTPConnection
from urllib import urlencode
from threading import Thread


from svnhook import hansoftserver

class TestHansoftServer:
    @classmethod
    def setup_class(cls):
        cls.server = hansoftserver.HansoftServer()
        t = Thread(target=cls.server.start,)
        t.start()

    @classmethod
    def teardown_class(cls):
        cls.server.server.shutdown()


    def test_receive_reply(self):
        connection = HTTPConnection('localhost', 9006)
        content = {'@task': 1, '@url': 'http://testurl'}
        connection.request("POST", "/post", urlencode(content), {"Content-type": "application/x-www-form-urlencoded", "Accept": "text/plain"})
        reply = connection.getresponse()
        assert reply.status == 200

    def test_external_call(self):
        temp_file = Mock()
        temp_file.name = "commit-msg.txt"
        hansoftserver.external_get_message = MagicMock(return_value="Another Message")
        hansoftserver.create_temp_file = MagicMock(return_value=temp_file)
        hansoftserver.external_change_log = MagicMock(return_value=0)
        hansoftserver.delete_temp_file = MagicMock()
        connection = HTTPConnection('localhost', 9006)
        content = {'task': 1, 'url': 'http://hansoft.url', 'path': '/home/svn/testproject/'}
        connection.request("POST", "/post", urlencode(content), {"Content-type": "application/x-www-form-urlencoded", "Accept": "text/plain"})
        reply = connection.getresponse()
        assert reply.status == 200
        hansoftserver.external_get_message.assert_called_once_with("/home/svn/testproject/", '1')
        hansoftserver.create_temp_file.assert_called_once_with("Another Message", "http://hansoft.url")
        hansoftserver.external_change_log.assert_called_once_with("/home/svn/testproject/", '1', "commit-msg.txt")