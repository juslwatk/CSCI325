# README

Author: Justice Watkins
Date:   02/07/2025

## Description
This assignment implements a simple Vector class (named Vector) that manages
dynamic memory for storing integers, mimicking basic std::vector<int> functionality.

Features:
- push_back()
- reserve()
- size()
- capacity()
- operator[] 
- Copy constructor
- Assignment operator
- Destructor

## How to Compile
1. Make sure the following files are in the same directory:
   - main.cpp
   - Vector.cpp
   - Vector.h
   - Makefile
2. Run 'make' on the command line to compile.
3. An executable named 'test' will be created.

## How to Run
- Run './test' on the command line (Linux/macOS)
- Observe the output as the test cases run.

## Test Cases
- We test adding 10 integers to the vector, checking growth.
- We test operator[] by printing out the contents.
- We then add 1000 more integers to ensure capacity grows properly.
- We demonstrate the copy constructor by creating v2 from v1.
- We demonstrate the assignment operator by assigning v1 to v3.
- We verify deep copy by modifying v3 and confirming it does not change v1.
