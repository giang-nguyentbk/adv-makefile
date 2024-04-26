lib_LTLIBRARIES += \
		libmodule1.la

# This will be adding sub-module dynamic libraries
libmodule1_la_LIBADD = 

# Invoke sub-Makefile.am
include sw/startup/Makefile.am
include sw/algorithm/Makefile.am
include sw/control/Makefile.am
include sw/tx/Makefile.am
include sw/rx/Makefile.am

libmodule1_la_SOURCES =

###
#
# # Define interfaces from other modules which is used in this module
# libmodule1_la_LIBADD += -litc -lutils -lmodule2 -lmodulex
# 
###

