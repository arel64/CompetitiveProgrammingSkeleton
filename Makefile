# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -g -Wall -Wextra -std=c++17

# Target executable
TARGET = q01

# Source file
SRC = q01.cpp

# Build the target
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean up build files
clean:
	rm -f $(TARGET)
