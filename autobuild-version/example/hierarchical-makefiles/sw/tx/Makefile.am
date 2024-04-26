noinst_LTLIBRARIES += libtx.la
libmodule1_la_LIBADD += libtx.la

libtx_la_CPPFLAGS	= \
				$(AM_CPPFLAGS) \
				-I$(abs_top_srcdir)/sw/tx/if \
				-I$(abs_top_srcdir)/sw/tx/inc

tx_COMMON_SOURCES 	= \
				sw/tx/src/txHandler.cc \
				sw/tx/src/txManager.cc

###
#
# tx_TARGET1_SOURCES	= \
#				sw/tx/src/...
#
###

libtx_la_SOURCES = $(tx_COMMON_SOURCES)

###
#
# if ENABLE_TARGET1
# 	libtx_la_SOURCES += $(tx_TARGET1_SOURCES)
# endif
#
###
