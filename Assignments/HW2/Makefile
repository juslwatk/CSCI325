# Authour: Justice Watkins
# File Name: Makefile
# Date: 2/14/2025
# Funtion: Used to complie the Employee inheritence project

#Compiler
CC = g++

#Compilation Flags
Target = employee

#Source Files
SRCS = main.cpp Employee.cpp Officer.cpp Supervier.cpp

#Object Files
OBJS = main.o Employee.o Officer.o Superviser.o

#Default Target
all: $(TARGET)

#Link all object files to create the final executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

#Compile main.cpp
main.o: main.cpp Employee.h Officer.h Supervisor.h
	$(CC) $(CFLAGS) main.cpp -o main.o

#Compile Employee.cpp
Employee.o: Employee.cpp Employee.h
	$(CC) $(CFLAGS) Employee.cpp -o Employee.o

#Compile Officer.cpp
Officer.o: Officer.cpp Officer.h Employee.h
	$(CC) $(CFLAGS) Officer.cpp -o Officer.o

#Compile Supervisor.cpp
Supervisor.o: Supervisor.cpp Supervisor.h Employee.h
	$(CC) $(CFLAGS) Supervisor.cpp -o Supervisor.o

#Clean target to remove compiled files
clean:
	rm -f $(OBJS) $(TARGET) *~
