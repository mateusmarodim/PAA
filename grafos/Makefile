# Name of binary
TARGET=main

# .cpp files
CPP_SOURCE=$(wildcard *.cpp)

# .hpp files
HPP_SOURCE=$(wildcard *.hpp)

# Object files
OBJ=$(CPP_SOURCE:.cpp=.o)

# Compiler
CPP=g++

# Compilation flags
CPP_FLAGS=-c		\
					-Wall	\
					-O2		\

#
# Compilation and linking
#
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CPP) -o $@ $^

%.o: %.cpp %.hpp
	$(CPP) -o $@ $< $(CPP_FLAGS)

main.o: main.c $(HPP_SOURCE)
