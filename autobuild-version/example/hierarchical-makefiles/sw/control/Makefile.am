noinst_LTLIBRARIES += libcontrol.la
libmodule1_la_LIBADD += libcontrol.la

libcontrol_la_CPPFLAGS	= \
				$(AM_CPPFLAGS) \
				-I$(abs_top_srcdir)/sw/control/if \
				-I$(abs_top_srcdir)/sw/control/inc

control_COMMON_SOURCES 	= \
				sw/control/src/controlHandler.cc \
				sw/control/src/controlManager.cc

###
#
# control_TARGET1_SOURCES	= \
#				sw/control/src/...
#
###

libcontrol_la_SOURCES = $(control_COMMON_SOURCES)

###
#
# if ENABLE_TARGET1
# 	libcontrol_la_SOURCES += $(control_TARGET1_SOURCES)
# endif
#
###
