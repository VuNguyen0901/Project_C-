# Define compiler and flags
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

# Define directories
SRCDIR = src
BUILDDIR = build
TARGETDIR = target

# Automatically add all subdirectories of SRCDIR to the include path
INCLUDES = $(shell find $(SRCDIR) -type d | sed 's/^/-I /')

# Find all source files recursively
SRCFILES = $(shell find $(SRCDIR) -name "*.cpp")

# Create object file names in the build directory, preserving directory structure
OBJFILES = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SRCFILES))

# Define the target executable
TARGET = $(TARGETDIR)/testapp

all: $(TARGETDIR)/ | $(TARGET)

# Rule to link object files to create the final executable
$(TARGET): $(OBJFILES)
	$(CXX) $(OBJFILES) -o $@

# Rule to compile source files into object files
$(BUILDDIR)/%.o : $(SRCDIR)/%.cpp | $(BUILDDIR)/%/
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Ensure the directory for the object file exists
$(BUILDDIR)/%/:
	mkdir -p $@

$(TARGETDIR)/:
	mkdir -p $@

# Clean up build directory
clean:
	rm -rf $(BUILDDIR)
	rm -rf $(TARGET)

run:
	./$(TARGET)

.PHONY: all clean
