# C++ Off-by-One Error Example

This repository demonstrates a common off-by-one error in C++ when iterating over a `std::vector`.  The error arises from using `<=` instead of `<` when comparing the loop counter to the vector's size, resulting in an access beyond the valid bounds of the vector.

## Bug

The `bug.cpp` file contains code with the off-by-one error.  This leads to undefined behavior, potentially causing a crash or incorrect output.

## Solution

The `bugSolution.cpp` file provides a corrected version of the code.  The fix involves changing the loop condition to `i < vec.size()`, preventing access to the element beyond the last valid index.

This example highlights the importance of carefully considering boundary conditions when working with vectors and arrays in C++.