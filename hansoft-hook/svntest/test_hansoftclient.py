# Require dependency setup
import pytest
from mock import MagicMock
from mock import Mock
from socket import gaierror
from urllib import urlencode

from svnhook import hansoftclient

class TestHansoftClient:
    def setup_method(self, method):
        self.h = hansoftclient.HansoftClient()
        self.h.setup_connection()

    def test_get_standard_url(self):
        assert self.h.url == 'localhost'
        assert self.h.port == 9005

    def test_custom_url(self):
        h = hansoftclient.HansoftClient("./svntest/hansoft.cfg")
        assert h.url == 'http://otherhost'
        assert h.port == 22


    def test_send_request_fail_unknown_server(self):
        self.h.connection.request = MagicMock(side_effect=gaierror("Name or service not known"))
        with pytest.raises(gaierror):
            result = self.h.send_request('bjorn', 1, '/home/svn/testproject/')
        self.h.connection.request.assert_called_once()

    def test_send_request(self):
        mock = Mock()
        mock.status = 200
        mock.reason = 'OK'
        self.h.connection.request = MagicMock(return_value=None)
        self.h.connection.getresponse = MagicMock(return_value=mock)
        response = self.h.send_request('bjorn', 1, '/home/svn/testproject/')
        params = urlencode({'author': 'bjorn', 'revision': 1, 'path': '/home/svn/testproject/'})
        header = {"Content-type": "application/x-www-form-urlencoded", "Accept": "text/plain"}
        self.h.connection.request.assert_called_once_with("POST", "/commit", params, header)
        assert response == mock

    def test_handle_commit(self):
        hansoftclient.external_get_author = MagicMock(return_value="bjorn")
        self.h.send_request = MagicMock()
        state = self.h.handle_commit('/home/svn/testproject/', 1)
        hansoftclient.external_get_author.assert_called_once_with('/home/svn/testproject/', 1)
        self.h.send_request.assert_called_once_with('bjorn', 1, '/home/svn/testproject/')