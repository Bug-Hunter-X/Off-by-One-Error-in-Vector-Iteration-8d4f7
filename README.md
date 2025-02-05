# Off-by-One Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error in C++ when iterating over a `std::vector`. The bug arises from an incorrect loop condition that attempts to access an element beyond the vector's valid index range.  This can lead to program crashes or unpredictable behavior.

The `bug.cpp` file contains the erroneous code, while `bugSolution.cpp` provides the corrected version.

## How to Reproduce

1. Compile `bug.cpp` (e.g., using g++).
2. Run the executable. Observe the program crashes or exhibits unexpected behavior.
3. Compile and run `bugSolution.cpp` to see the corrected code in action.

## Lesson Learned

Always be mindful of loop conditions when accessing vector elements.  Remember that `vector.size()` returns the number of elements, while valid indices range from 0 to `vector.size() - 1`.