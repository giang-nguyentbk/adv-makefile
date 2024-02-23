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

all: test

test:
	@echo "sw/make/Makefile: Compilation for $(TARGET)done!!!"

clean:
	$(RMV) $(BIN_DIR)
