noinst_LTLIBRARIES += libstartup.la
libmodule1_la_LIBADD += libstartup.la

libstartup_la_CPPFLAGS	= \
				$(AM_CPPFLAGS) \
				-I$(abs_top_srcdir)/sw/startup/if \
				-I$(abs_top_srcdir)/sw/startup/inc

startup_COMMON_SOURCES 	= \
				sw/startup/src/startupHandler.cc \
				sw/startup/src/startupManager.cc

###
#
# startup_TARGET1_SOURCES	= \
#				sw/startup/src/...
#
###

libstartup_la_SOURCES = $(startup_COMMON_SOURCES)

###
#
# if ENABLE_TARGET1
# 	libstartup_la_SOURCES += $(startup_TARGET1_SOURCES)
# endif
#
###
