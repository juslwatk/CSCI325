/**
 * @file Vector.cpp
 * @brief Implementation of the Vector class methods.
 */

#include "vector.h"
#include <iostream> // For debugging/printing if needed
#include <cstdlib>  // for exit, if you want to handle out-of-memory, etc.

// Default constructor
Vector::Vector()
{
    vec_ptr = nullptr;
    vec_size = 0;
    vec_capacity = 0;
}

// Copy constructor
Vector::Vector(const Vector &other)
{
    // Copy size and capacity
    vec_size = other.vec_size;
    vec_capacity = other.vec_capacity;

    // Allocate new array if other has capacity > 0
    if (vec_capacity > 0) {
        vec_ptr = new int[vec_capacity];
        // Copy elements
        for (int i = 0; i < vec_size; i++) {
            vec_ptr[i] = other.vec_ptr[i];
        }
    } else {
        // other vector is empty
        vec_ptr = nullptr;
    }
}

// Destructor
Vector::~Vector()
{
    delete[] vec_ptr; 
    vec_ptr = nullptr; 
    vec_size = 0;
    vec_capacity = 0;
}

// Assignment operator
Vector& Vector::operator=(const Vector &other)
{
    // Guard against self-assignment
    if (this == &other) {
        return *this;
    }

    // Deallocate existing array
    delete[] vec_ptr;

    // Copy size and capacity from other
    vec_size = other.vec_size;
    vec_capacity = other.vec_capacity;

    // Allocate new memory and copy the elements
    if (vec_capacity > 0) {
        vec_ptr = new int[vec_capacity];
        for (int i = 0; i < vec_size; i++) {
            vec_ptr[i] = other.vec_ptr[i];
        }
    } else {
        vec_ptr = nullptr;
    }

    return *this;
}

// Returns the current size
int Vector::size()
{
    return vec_size;
}

// Returns the current capacity
int Vector::capacity()
{
    return vec_capacity;
}

// push_back
void Vector::push_back(int element)
{
    // If we need more space
    if (vec_size >= vec_capacity) {
        // If no capacity yet, reserve 1
        // Otherwise, double the capacity
        int newCapacity = (vec_capacity == 0) ? 1 : (vec_capacity * 2);
        reserve(newCapacity);
    }

    // Add new element
    vec_ptr[vec_size] = element;
    vec_size++;
}

// reserve
void Vector::reserve(int n)
{
    if (n <= vec_capacity) {
        // No reallocation needed
        return;
    }

    // Allocate new array
    int *newArray = new int[n];
    // Copy existing elements
    for (int i = 0; i < vec_size; i++) {
        newArray[i] = vec_ptr[i];
    }
    // Deallocate old array
    delete[] vec_ptr;
    // Point to new array
    vec_ptr = newArray;
    // Update capacity
    vec_capacity = n;
}

// operator[]
int& Vector::operator[](unsigned int index)
{
    // Note: No bounds checking done here, 
    // so be sure index < vec_size in usage
    return vec_ptr[index];
}
