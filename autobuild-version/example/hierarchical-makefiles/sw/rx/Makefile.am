noinst_LTLIBRARIES += librx.la
libmodule1_la_LIBADD += librx.la

librx_la_CPPFLAGS	= \
				$(AM_CPPFLAGS) \
				-I$(abs_top_srcdir)/sw/rx/if \
				-I$(abs_top_srcdir)/sw/rx/inc

rx_COMMON_SOURCES 	= \
				sw/rx/src/rxHandler.cc \
				sw/rx/src/rxManager.cc

###
#
# rx_TARGET1_SOURCES	= \
#				sw/rx/src/...
#
###

librx_la_SOURCES = $(rx_COMMON_SOURCES)

###
#
# if ENABLE_TARGET1
# 	librx_la_SOURCES += $(rx_TARGET1_SOURCES)
# endif
#
###
