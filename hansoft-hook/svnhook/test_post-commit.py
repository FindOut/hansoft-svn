__author__ = 'bjorn'

import pytest


# from svnhook.post-commit import PostCommit

class TestPostCommit():

    def test_get_url(self):
        pc = PostCommit("/test/dir", 1)
        assert False