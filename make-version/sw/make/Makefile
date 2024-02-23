ROOT_DIR := $(shell git rev-parse --show-toplevel)

#all:
#       @echo $(ROOT_DIR)

# --------------------------------------------------
# Call Makefiles for init setups and build database
# --------------------------------------------------
include Makefile.config
include Makefile.common
#include Makefile.swdb


# --------------------------------------------------
# Call Makefiles for modules of the project
# --------------------------------------------------
include $(APP_DIR)/module1/Makefile
include $(APP_DIR)/startUp/Makefile
include $(APP_DIR)/main/Makefile
#include $(APP_DIR)/module2/Makefile
#include $(APP_DIR)/module3/Makefile
#include $(APP_DIR)/module4/Makefile
#include $(APP_DIR)/module5/Makefile

# --------------------------------------------------
# Call Makefiles for creating ELF file
# --------------------------------------------------
include Makefile.targets


all: rootMakefile

rootMakefile:
	@echo "sw/make/Makefile: Compilation for $(TARGET_PLF1_GEN2) done!!! [OK]"

clean:
	$(RMV) $(BIN_DIR)

run:
	@$(BIN_DIR)/plf1_gen2.elf
