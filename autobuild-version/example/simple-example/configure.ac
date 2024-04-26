# Initialize autoconf with packageName = simple, version = 0.1, maintainer contact = giang.nguyentbk@gmail.com
AC_INIT([main], [0.1], [giang.nguyentbk@gmail.com])

# Initialize automake
AM_INIT_AUTOMAKE([foreign])

# Print CXX, CC, CXXLD,... only instead of full gcc/g++ commands
AM_SILENT_RULES([yes])

# Check if BUILD_TARGET provided
AC_ARG_VAR(BUILD_TARGET, [choose: target1 target2])
AC_MSG_NOTICE([.........checking...............])
AS_IF([test "x$BUILD_TARGET" = x], [AC_MSG_ERROR([No BUILD_TARGET was given!])])

# Define a function that check if input argument from ./configure BUILD_TARGET=... is valid
check_target()
{
    for t in "$@"
    do
        test "x$BUILD_TARGET" = "x$t" && return 0
    done
    return 1
}

# If BUILD_TARGET input is valid then set respective flags
AM_CONDITIONAL([ENABLE_TARGET1], [check_target target1])
AM_CONDITIONAL([ENABLE_TARGET2], [check_target target2])

# Set prog language,...
AC_LANG(C++)
AC_PROG_CXX
AC_CONFIG_FILES([Makefile])

# Printout all output traces
AC_OUTPUT

