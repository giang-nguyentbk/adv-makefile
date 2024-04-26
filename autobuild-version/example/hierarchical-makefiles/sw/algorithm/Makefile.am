noinst_LTLIBRARIES += libalgorithm.la
libmodule1_la_LIBADD += libalgorithm.la

libalgorithm_la_CPPFLAGS	= \
				$(AM_CPPFLAGS) \
				-I$(abs_top_srcdir)/sw/algorithm/if \
				-I$(abs_top_srcdir)/sw/algorithm/inc

algorithm_COMMON_SOURCES 	= \
				sw/algorithm/src/algorithmHandler.cc \
				sw/algorithm/src/algorithmManager.cc

###
#
# algorithm_TARGET1_SOURCES	= \
#				sw/algorithm/src/...
#
###

libalgorithm_la_SOURCES = $(algorithm_COMMON_SOURCES)

###
#
# if ENABLE_TARGET1
# 	libalgorithm_la_SOURCES += $(algorithm_TARGET1_SOURCES)
# endif
#
###
