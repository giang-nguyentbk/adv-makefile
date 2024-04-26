# adv-makefile
What this repo will bring up:
```bash
# 1. Build all source files (.cc) from top level of the project tree. Build them to object files and link to an executable file. [OK]

# 2. Concatenate text file databases to a swdb.bin.txt which is ready for textbin-bin tool to generate a binary database file swdb.bin which is loaded into RAM at program startup.

# 3. Build unitTest's source files.

# 4. Support cross compilation, how to get target compiler and specific packages built into an SDK for a target platform.

# 5. Using GNU autobuild instead.
```

## Traditional Make
First, let's see what is the software architecture:
```
1. Start with (ROOT_DIR)/sw/make/: this is a directory that contains the main Makefile and its utility files.
	
	+ Makefile: this is main Makefile which will be run by command line "make" to build the entire sources. What it will do?
		
		a. First get the root directory ROOT_DIR (top of repository) by command line "git rev-parse --show-toplevel".
		b. Use "include" to invoke utility Makefiles such as Makefile.config, Makefile.common,... for initial configuration and building databases,...
		c. Use "include" to invoke all sub-Makefile placed in sub-modules which will also call its child sub-Makefiles recursively. After all sub-Makefiles are run, object files that has been built will be produced.
		d. Use "include" to invoke Makefile.targets that builds a respective executable file based on which build target is specified.

	+ Makefile.config: Based on ROOT_DIR, define all other necessary paths such as: SW_DIR, APP_DIR, BIN_DIR, OBJ_DIR,...

	+ Makefile.common: Setup some common parts such as: CFLAGS,...

	+ Makefile.swdb: Run some scripts to compile text-based database files to binary database files.

2. Next is (ROOT_DIR)/sw/app/: this is our directory that contains all header, source files,... In this example, software structure is divided into 4 submodules: commonUtils, main, module1 and startup.

	+ This is not a starting point "main function", but will instead implement API from our libprocman (which manage how executable files is started, and set appropriate priorities for them,...)

3. Let's look a bit into our software structures:

	+ First look at the submodule "startUp": this will provide some interface method for main function to start up and initialize all other submodules, for instance, here is "module1". API methods are "startUpAllInternalSubModules()" and "destroyAllInternalSubModules()". It manages a list of other module's startUp classes, for example, Module1::StartUp.
	
	+ Note that "module1" here is an internal module, we might have some other modularized modules in other repositories, so we will implement "startUpAllExternalSubModules()" and "destroyAllExternalSubModules()" later on.

4. Okay, now let's go to our main part. It's Makefile for module1.

	+ "MODULE1_UNITS": Include paths to all source files of module1.

	+ "include $(MODULE1_UNITS:%=$(APP_DIR)/%/Makefile)": Run all sub-Makefiles in those paths specified above to compile respective object files.

	+ Define MODULE1_TARGET1_OBJS including all object files in this module1 that needs to compile target1 executable file.

	+ Add MODULE1_TARGET1_OBJS into TARGET1_OBJS to compile together with other module later on higher level Makefile.

```

```bash
~> cd sw/make
~> make clean
~> make
~> make run
```

![](./make-version/sw/assets/traditional_make_result.png?raw=true)

## GNU Autotools
