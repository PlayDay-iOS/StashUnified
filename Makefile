ARCHS = armv7 arm64
include $(THEOS)/makefiles/common.mk

TOOL_NAME = StashApps
StashApps_FILES = src/main.mm src/stashutils.mm src/appstasher.mm src/binlibstasher.mm src/fstabutil.mm

include $(THEOS_MAKE_PATH)/tool.mk
SUBPROJECTS += csstashedappexecutable
include $(THEOS_MAKE_PATH)/aggregate.mk
