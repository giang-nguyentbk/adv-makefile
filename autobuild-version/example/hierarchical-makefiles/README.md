```bash
# Necessary files
# 1. configure.ac
# 2. Makefile.am
# 3. Source and header files

# If any change in configure.ac or Makefile.am, need to rerun these:
$ libtoolize
$ aclocal
$ automake --add-missing
$ autoreconf -fi

# If want to build other target
$ ./configure BUILD_TARGET=target1
$ make
$ ./main

# For example, rebuild target2
$ make clean
$ ./configure BUILD_TARGET=target2
$ make
$ ./main

# Clean object files
$ make clean
```