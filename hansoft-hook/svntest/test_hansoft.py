# Require dependency setup
import pytest
from mock import MagicMock
from mock import Mock
from socket import gaierror
from urllib import urlencode

from svnhook.hansoft import Hansoft

class TestHansoft:
    def setup_method(self, method):
        self.h = Hansoft()
        self.h.setup_connection()

    def test_get_standard_url(self):
        assert self.h.url == 'http://localhost'
        assert self.h.port == 9005

    def test_custom_url(self):
        h = Hansoft("./svntest/hansoft.cfg")
        assert h.url == 'http://otherhost'
        assert h.port == 22


    def test_send_request_fail_unknown_server(self):
        self.h.connection.request = MagicMock(side_effect=gaierror("Name or service not known"))
        with pytest.raises(gaierror):
            result = self.h.send_request('bjorn', 1)
        self.h.connection.request.assert_called_once()

    def test_send_request(self):
        mock = Mock()
        mock.status = 200
        mock.reason = 'OK'
        self.h.connection.request = MagicMock(return_value=None)
        self.h.connection.getresponse = MagicMock(return_value=mock)
        response = self.h.send_request('bjorn', 1)
        params = urlencode({'@author': 'bjorn', '@revision': 1})
        header = {"Content-type": "application/x-www-form-urlencoded", "Accept": "text/plain"}
        self.h.connection.request.assert_called_once_with("POST", "/commit", params, header)
        assert response == mock