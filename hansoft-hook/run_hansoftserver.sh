#
# Batch file for launching the minimal server which handles annotation
# of commits for the Hansoft/SVN integration
# Edit the properties below according to your installation
#
export PYTHONPATH=/path/to/the/folder/containing/the/svnhook_folder
python svnhook/hansoftserver.py
