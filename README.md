# adv-makefile
What this repo will bring up:
```
        1. Build all source files (.cc) from top level of the project tree. Build them to object files and link to an
        executable file. [OK]
        2. Concatenate text file databases to a swdb.bin.txt which is ready for textbin-bin tool to generate a binary
        database file swdb.bin which is loaded into RAM at program startup.
        3. Build unitTest's source files.
	4. Support cross compilation, how to get target compiler and specific packages built into a SDK
	for a target platform.
	5. Using GNU autobuild instead.
```

## make-version
```bash
~> cd sw/make
~> make clean
~> make
~> make run
```

## autobuild-version