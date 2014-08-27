REM
REM Batch file for launching the minimal server which handles annotation
REM of commits for the Hansoft/SVN integration
REM Edit the properties below according to your installation
REM
set PYTHONPATH=C:\path\to\folder\containing\the\svnhookfolder
set PYTHONPROGRAM=python2.7
%PYTHONPROGRAM% svnhook\hansoftserver.py
