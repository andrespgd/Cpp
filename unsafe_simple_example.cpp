#include <iostream>
 
int main()
{
    int array1[2] = {0,1}; // initialize array

    // these values DO exist
    std::cout << array1[0] << std::endl;
    std::cout << array1[1] << std::endl;

    // this value does NOT exist
    // in most languages this line is NOT valid code and will throw an error
    std::cout << array1[5] << std::endl;
  
    // C++ will print 0, 1, 0 (the last 0 should NOT exist)
    //
    // C++ will pretend that it exists and print out whatever is at that address in memory
    //
    // Not typically an issue, but what if a password is in the next block of memory
}
