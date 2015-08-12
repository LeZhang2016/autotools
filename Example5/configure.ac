
#AC_INIT (package, version, [bug-report], [tarname], [url])
AC_INIT([Exemple 5], [0.01], [kevin.stroeher@gmail.com], [Exemple_5], [http://www.kevinstroeher.de])

#Set a minimum version number of ac
AC_PREREQ([2.68])

# Safety check
AC_CONFIG_SRCDIR([src/main.c])

# output for configuration
AC_CONFIG_HEADERS([inc/config.h])

# autotools subdir for auxiliary files
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([1.11 subdir-objects -Wall -Werror])
AC_CONFIG_FILES([Makefile lib/Makefile src/Makefile])

# libtool init
LT_INIT
# Lock for a C compiler:
AC_PROG_CC
#AM_PROG_CC_C_O
AC_PROG_RANLIB

AC_OUTPUT
