#!/bin/bash

cd classes
(cd ~/git/hansoft-svn/hansoft-integration/target/classes; tar cvf - .) | tar xf -
