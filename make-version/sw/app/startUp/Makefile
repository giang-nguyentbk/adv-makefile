STARTUP_UNITS		:= \
			startUp/src \

include $(STARTUP_UNITS:%=$(APP_DIR)/%/Makefile)

STARTUP_TARGET1_OBJS	:= $(STARTUP_COMMON_FILES:%.cc=$(BIN_DIR)/%.o) $(STARTUP_TARGET1_FILES:%.cc=$(BIN_DIR)/%.o)

STARTUP_FILES		:= $(sort $(STARTUP_COMMON_FILES) $(STARTUP_TARGET1_FILES))

TARGET1_OBJS		+= $(STARTUP_TARGET1_OBJS)

# List all dependent headers for startUp including its own headers and other module's headers
STARTUP_INCLUDE		:= \
			-I$(APP_DIR)/startUp/if \
			-I$(APP_DIR)/startUp/inc \
			-I$(APP_DIR)/commonUtils/inc \
			-I$(APP_DIR)/module1/startUp/inc	# Need module1StartUp.h for startUpImpl.h
			

all: $(STARTUP_TARGET1_OBJS)

# Build target 1 objects
$(BIN_DIR)/startUp/%.o: $(APP_DIR)/startUp/%.cc
	@mkdir -p $(@D)
	@D_FILE=$(@:.o=.o.d); \
	cd $(<D); echo " Compiling for $(TARGET_PLF1_GEN2) -> $<"; \
	$(TARGET1_CXX) $(TARGET1_CFLAGS) $(STARTUP_INCLUDE) -MF$$D_FILE -MMD $(<F) -o $@ && \
	$(DEPENDENCIES_MAP_FIXING);