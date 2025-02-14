/**
 * @file Vector.h
 * @brief Header file defining a simple dynamic array class "Vector" for integers.
 * @author Justice Watkins
 * @date 02/07/2025
 *
 * This class mimics some of the functionality of std::vector<int>.
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>  // For debugging/printing if needed

class Vector {
private:
    int *vec_ptr;       ///< Points to the dynamic array
    int vec_size;       ///< Current number of elements
    int vec_capacity;   ///< Allocated capacity of the array

public:
    /**
     * @brief Default constructor that initializes an empty vector
     * 
     * Post-conditions:
     *   - vec_ptr is set to nullptr
     *   - vec_size = 0
     *   - vec_capacity = 0
     */
    Vector();

    /**
     * @brief Copy constructor
     * 
     * Initializes a new Vector with the same contents as another Vector.
     * 
     * @param other The Vector to be copied
     * 
     * Post-conditions:
     *   - New Vector has its own allocated array
     *   - vec_ptr contains a copy of other's data
     *   - vec_size = other.vec_size
     *   - vec_capacity = other.vec_capacity
     */
    Vector(const Vector &other);

    /**
     * @brief Destructor
     * 
     * Deallocates the dynamic array.
     * 
     * Post-conditions:
     *   - vec_ptr is deallocated
     *   - vec_size = 0
     *   - vec_capacity = 0
     */
    ~Vector();

    /**
     * @brief Assignment operator
     * 
     * Clears the current contents of this Vector and copies the contents
     * from the other Vector.
     * 
     * @param other The Vector to be assigned from
     * @return A reference to the assigned Vector
     * 
     * Post-conditions:
     *   - This Vector contains a copy of other's data
     *   - This Vector's capacity and size match those of other
     */
    Vector& operator=(const Vector &other);

    /**
     * @brief Returns the current number of elements in the Vector
     * 
     * @return An integer representing the size (number of elements)
     */
    int size();

    /**
     * @brief Returns the allocated capacity of the Vector
     * 
     * @return An integer representing the capacity (allocated space)
     */
    int capacity();

    /**
     * @brief Adds an element to the end of the Vector
     * 
     * If necessary, it will call reserve() to increase the capacity 
     * (typically doubling the current capacity if vec_capacity is non-zero, 
     * or setting it to 1 if the Vector is empty).
     * 
     * @param element The integer to add
     * 
     * Post-conditions:
     *   - The Vector grows in size by 1
     *   - If capacity was insufficient, Vector capacity is doubled (or set to 1)
     */
    void push_back(int element);

    /**
     * @brief Requests that the capacity of the Vector be at least n
     * 
     * If n is greater than the current capacity, the storage is reallocated
     * to accommodate n elements. If n <= current capacity, nothing changes.
     * 
     * @param n The desired capacity
     * 
     * Post-conditions:
     *   - If n > vec_capacity, vec_ptr is reallocated to size n
     *   - vec_size remains unchanged
     */
    void reserve(int n);

    /**
     * @brief Overloads the subscript operator to access an element by index
     * 
     * @param index The index of the element (0-based)
     * @return A reference to the element at the given index
     * 
     * @warning Does not perform bounds checking (like std::vector[]).
     */
    int& operator[](unsigned int index);
};

#endif
