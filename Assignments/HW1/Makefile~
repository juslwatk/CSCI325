# Makefile for Vector project

CXX = g++
CXXFLAGS = -Wall -Wextra -g

# The final executable
EXEC = test

all: $(EXEC)

# Linking stage
$(EXEC): main.o Vector.o
	$(CXX) $(CXXFLAGS) main.o Vector.o -o $(EXEC)

# Compile main.cpp
main.o: main.cpp Vector.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Compile Vector.cpp
Vector.o: Vector.cpp Vector.h
	$(CXX) $(CXXFLAGS) -c Vector.cpp

# Clean up
clean:
	rm -f *.o $(EXEC)
