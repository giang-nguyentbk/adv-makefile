MAIN_COMMON_FILES +=	main/main.cc

MAIN_UNITS		:= \
			main \

MAIN_TARGET1_OBJS	:= $(MAIN_COMMON_FILES:%.cc=$(BIN_DIR)/%.o) $(MAIN_TARGET1_FILES:%.cc=$(BIN_DIR)/%.o)

MAIN_FILES		:= $(sort $(MAIN_COMMON_FILES) $(MAIN_TARGET1_FILES))

TARGET1_OBJS		+= $(MAIN_TARGET1_OBJS)

# List all dependent headers for module1 including its own headers and other module's headers
MAIN_INCLUDE		:= \
			-I$(APP_DIR)/startUp/if


all: $(MAIN_TARGET1_OBJS)

# Build target 1 objects
$(BIN_DIR)/main/%.o: $(APP_DIR)/main/%.cc
	@mkdir -p $(@D)
	@D_FILE=$(@:.o=.o.d); \
	cd $(<D); echo " Compiling for $(TARGET_PLF1_GEN2) -> $<"; \
	$(TARGET1_CXX) $(TARGET1_CFLAGS) $(MAIN_INCLUDE) -MF$$D_FILE -MMD $(<F) -o $@ && \
	$(DEPENDENCIES_MAP_FIXING);