/**
 * @file main.cpp
 * @brief Test driver for the Vector class.
 */

#include <iostream>
#include "vector.h"

int main() {
    // 1) Test default constructor
    Vector v1;
    std::cout << "Initially, v1.size() = " << v1.size() 
              << ", v1.capacity() = " << v1.capacity() << std::endl;

    // 2) Test push_back and capacity expansion
    std::cout << "Pushing back 10 elements...\n";
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        std::cout << " v1.size() = " << v1.size() 
                  << ", v1.capacity() = " << v1.capacity() << "\n";
    }

    // 3) Test operator[] 
    std::cout << "\nElements in v1: ";
    for (int i = 0; i < v1.size(); i++) {
        // Using operator[]
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;

    // 4) Test pushing 1000+ integers
    std::cout << "\nPushing 1000 more elements to test large insert...\n";
    for (int i = 0; i < 1000; i++) {
        v1.push_back(i + 100);
    }
    std::cout << "Now, v1.size() = " << v1.size() 
              << ", v1.capacity() = " << v1.capacity() << std::endl;

    // 5) Test copy constructor
    std::cout << "\nTesting copy constructor with v2...\n";
    Vector v2(v1);
    std::cout << " v2.size() = " << v2.size() 
              << ", v2.capacity() = " << v2.capacity() << std::endl;
    // Check a few random elements
    std::cout << " v2[0] = " << v2[0] << ", v2[500] = " << v2[500] << std::endl;

    // 6) Test assignment operator
    std::cout << "\nTesting assignment operator...\n";
    Vector v3;
    std::cout << " v3.size() before = " << v3.size() << std::endl;
    v3 = v1; // uses operator=
    std::cout << " v3.size() after  = " << v3.size() 
              << ", v3.capacity() = " << v3.capacity() << std::endl;
    std::cout << " v3[0] = " << v3[0] << ", v3[999] = " << v3[999] << std::endl;

    // Demonstrate modifying data in v3 does not affect v1 if it's a deep copy
    v3[0] = -999;
    std::cout << "\nModified v3[0] = " << v3[0] 
              << ", while v1[0] = " << v1[0] << std::endl;

    std::cout << "\nAll tests complete.\n";
    return 0;
}
