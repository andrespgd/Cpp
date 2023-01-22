#include <iostream>

int main() {
    int* ptr = new int[10];
    // some code here
    // ...
    // forgot to delete the allocated memory
    // program will cause memory leak
    return 0;
}

/*
In this example, the new operator 
is used to dynamically allocate memory 
for an array of integers, but the memory
is never released using delete[] ptr, 
resulting in a memory leak.
*/
