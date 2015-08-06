
#AC_INIT (package, version, [bug-report], [tarname], [url])
AC_INIT([hello], [0.01], [kevin.stroeher@gmail.com], [hello], [http://kevinstroeher.de])

#Set a minimum version number of ac
AC_PREREQ([2.68])

# Safety check
AC_CONFIG_SRCDIR([hello.c])

# output for configuration
AC_CONFIG_HEADERS([config.h])

# autotools subdir for auxiliary files
AC_CONFIG_AUX_DIR([build-aux])

AM_INIT_AUTOMAKE([1.11 -Wall -Werror])
AC_CONFIG_FILES([Makefile])

# Lock for a C compiler:
AC_PROG_CC

AC_OUTPUT
