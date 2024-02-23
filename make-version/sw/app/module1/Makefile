MODULE1_UNITS		:= \
			module1/moduleIf/src \
			module1/service/clockConfigService/src \
			module1/service/memoryProtectService/src \
			module1/serviceControl/module1TimingPhaseCtrl/src \
			module1/serviceControl/module1CompensationCtrl/src \
			module1/startUp/src \
			module1/utilities/cmdHandler/src \
			module1/utilities/helpers/src

include $(MODULE1_UNITS:%=$(APP_DIR)/%/Makefile)

MODULE1_TARGET1_OBJS	:= $(MODULE1_COMMON_FILES:%.cc=$(BIN_DIR)/%.o) $(MODULE1_TARGET1_FILES:%.cc=$(BIN_DIR)/%.o)

MODULE1_FILES		:= $(sort $(MODULE1_COMMON_FILES) $(MODULE1_TARGET1_FILES))

TARGET1_OBJS		+= $(MODULE1_TARGET1_OBJS)

# List all dependent headers for module1 including its own headers and other module's headers
MODULE1_INCLUDE		:= \
			-I$(APP_DIR)/module1/moduleIf/if \
			-I$(APP_DIR)/module1/moduleIf/inc \
			-I$(APP_DIR)/module1/service/clockConfigService/if \
			-I$(APP_DIR)/module1/service/clockConfigService/inc \
			-I$(APP_DIR)/module1/service/memoryProtectService/if \
			-I$(APP_DIR)/module1/service/memoryProtectService/inc \
			-I$(APP_DIR)/module1/serviceControl/module1CompensationCtrl/if \
			-I$(APP_DIR)/module1/serviceControl/module1CompensationCtrl/inc \
			-I$(APP_DIR)/module1/serviceControl/module1TimingPhaseCtrl/if \
			-I$(APP_DIR)/module1/serviceControl/module1TimingPhaseCtrl/inc \
			-I$(APP_DIR)/module1/startUp/inc \
			-I$(APP_DIR)/module1/utilities/cmdHandler/inc \
			-I$(APP_DIR)/module1/utilities/helpers/inc
#                       -I$(APP_DIR)/module3/drv/if \#
#                       -I$(APP_DIR)/module3/drv/inc \#


all: $(MODULE1_TARGET1_OBJS)

# Build target 1 objects
$(BIN_DIR)/module1/%.o: $(APP_DIR)/module1/%.cc
	@mkdir -p $(@D)
	@D_FILE=$(@:.o=.o.d); \
	cd $(<D); echo " Compiling (Target 1) $<"; \
	$(TARGET1_CXX) $(TARGET1_CFLAGS) $(MODULE1_INCLUDE) -MF$$D_FILE -MMD $(<F) -o $@ && \
	$(DEPENDENCIES_MAP_FIXING);

