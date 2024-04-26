AC_INIT([module1], [0.1])

AM_INIT_AUTOMAKE([1.9 foreign subdir-objects])

AM_SILENT_RULES([yes])

AM_PROG_AR
LT_INIT
AC_PROG_CXX

AC_ARG_VAR(BUILD_TARGET, [choose: target1 target2])
AC_MSG_NOTICE([.........checking...............])
AS_IF([test "x$BUILD_TARGET" = x], [AC_MSG_ERROR([No BUILD_TARGET was given!])])

check_target()
{
    for t in "$@"
    do
        test "x$BUILD_TARGET" = "x$t" && return 0
    done
    return 1
}

AM_CONDITIONAL([ENABLE_TARGET1], [check_target target1])
AM_CONDITIONAL([ENABLE_TARGET2], [check_target target2])


AM_CFLAGS="$AM_CFLAGS -std=c11 -Wall -Werror -Wno-unused-parameter -Wextra -pedantic"
AC_SUBST([AM_CFLAGS])

AM_CXXFLAGS="$AM_CXXFLAGS -std=c++17 -Wall -Werror -Wno-unused-parameter -Wextra -pedantic"
AC_SUBST([AM_CXXFLAGS])

AC_CONFIG_FILES([Makefile])

AC_OUTPUT