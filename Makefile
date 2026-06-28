# Makefile for gpuBladeSoft GPU Plugin
# PSEmuPro GPU plugin version 1.64 reverse engineering project
#
# This Makefile supports both Windows (DLL) and Linux (SO) builds

CC = gcc
CXX = g++
AR = ar

# Compiler flags
CFLAGS = -Wall -Wextra -fPIC
CXXFLAGS = -Wall -Wextra -fPIC

# Platform-specific flags
ifeq ($(OS),Windows_NT)
    # Windows build
    PLATFORM = windows
    SHARED_FLAGS = -shared -Wl,-out-implib,libgpuBladeSoft.a
    OUTPUT_EXT = .dll
else
    # Linux build
    PLATFORM = linux
    SHARED_FLAGS = -shared
    OUTPUT_EXT = .so
endif

# Architecture flags
ARCH_FLAGS = -m32

# Output files
DLL_NAME = gpuBladeSoft$(OUTPUT_EXT)
LIB_NAME = libgpuBladeSoft.a

# Source directories
SRC_DIR = src
INC_DIR = gpu_headers
OBJ_DIR = obj

# Source files
SOURCES = \
    $(SRC_DIR)/gpu_core.c \
    $(SRC_DIR)/gpu_interface.c \
    $(SRC_DIR)/gpu_render.c \
    $(SRC_DIR)/gpu_texture.c \
    $(SRC_DIR)/gpu_display.c \
    $(SRC_DIR)/gpu_frame.c \
    $(SRC_DIR)/gpu_state.c \
    $(SRC_DIR)/gpu_znc.c

# Object files
OBJECTS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SOURCES))

# Header files
HEADERS = $(INC_DIR)/gpu_context.h \
          $(INC_DIR)/gpu_core.h \
          $(INC_DIR)/gpu_interface.h \
          $(INC_DIR)/gpu_status.h \
          $(INC_DIR)/gpu_texture.h \
          $(INC_DIR)/gpu_display.h \
          $(INC_DIR)/gpu_render.h \
          $(INC_DIR)/gpu_state.h \
          $(INC_DIR)/gpu_shader.h \
          $(INC_DIR)/gpu_frame.h \
          $(INC_DIR)/gpu_znc.h

# Include paths
INCLUDES = -I$(INC_DIR)

# Linker flags
LDFLAGS = $(SHARED_FLAGS) $(ARCH_FLAGS)

# Default target
all: $(DLL_NAME)

# Create build directories
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Compile source files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS) | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Link DLL
$(DLL_NAME): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS)

# Static library
$(LIB_NAME): $(OBJECTS)
	$(AR) rcs $@ $(OBJECTS)

# Clean build artifacts
clean:
	rm -rf $(OBJ_DIR)
	rm -f $(DLL_NAME)
	rm -f $(LIB_NAME)

# Clean all generated files
distclean: clean
	rm -f *.log
	rm -f *.bak

# Install (copy DLL to system directory)
install: $(DLL_NAME)
ifeq ($(PLATFORM),windows)
	copy $(DLL_NAME) $(PREFIX)/system32/
else
	cp $(DLL_NAME) $(PREFIX)/lib/
	ldconfig
endif

# Uninstall
uninstall:
ifeq ($(PLATFORM),windows)
	rm -f $(PREFIX)/system32/$(DLL_NAME)
else
	rm -f $(PREFIX)/lib/$(DLL_NAME)
	ldconfig
endif

# Debug build
debug: CFLAGS += -g -DDEBUG
debug: CXXFLAGS += -g -DDEBUG
debug: clean all

# Release build
release: CFLAGS += -O2 -DNDEBUG
release: CXXFLAGS += -O2 -DNDEBUG
release: clean all

# Check for dependencies
check-deps:
	@echo "Checking dependencies..."
	@which $(CC) > /dev/null || (echo "Error: $(CC) not found" && exit 1)
	@which $(AR) > /dev/null || (echo "Error: $(AR) not found" && exit 1)
	@echo "All dependencies satisfied"

# Help
help:
	@echo "gpuBladeSoft GPU Plugin Build System"
	@echo ""
	@echo "Targets:"
	@echo "  all       - Build the plugin (default)"
	@echo "  clean     - Remove build artifacts"
	@echo "  distclean - Remove all generated files"
	@echo "  install   - Install the plugin"
	@echo "  uninstall - Uninstall the plugin"
	@echo "  debug     - Build debug version"
	@echo "  release   - Build release version"
	@echo "  check-deps - Check for required dependencies"
	@echo "  help      - Show this help message"
	@echo ""
	@echo "Environment variables:"
	@echo "  PREFIX    - Installation prefix (default: /usr/local)"
	@echo ""
	@echo "Platforms: $(PLATFORM)"
	@echo "Architecture: 32-bit (use -m64 for 64-bit)"

# Phony targets
.PHONY: all clean distclean install uninstall debug release check-deps help
