# Makefile for Vector project

CXX = g++
CXXFLAGS = -Wall -Wextra -g

# The final executable
EXEC = test

all: $(EXEC)

# Linking stage
$(EXEC): main.o vector.o
	$(CXX) $(CXXFLAGS) main.o vector.o -o $(EXEC)

# Compile main.cpp
main.o: main.cpp vector.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Compile Vector.cpp
Vector.o: vector.cpp vector.h
	$(CXX) $(CXXFLAGS) -c vector.cpp

# Clean up
clean:
	rm -f *.o $(EXEC)
