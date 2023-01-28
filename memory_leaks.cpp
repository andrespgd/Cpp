/*
This code creates an infinite loop that continuously 
allocates memory for an array of integers, 
but never frees the memory by calling delete[] ptr. 

This results in a memory leak, 
as the program will eventually run out of memory and crash. 

If you watch the memory usage it will peak 
using almost all available memory,
and then the process will be "killed" automatically.

To fix this, the memory should be freed using 
delete[] ptr before the end of the loop.
*/

#include <iostream>

int main() {
    int counter = 0;
    while (true) {
        // Allocate memory dynamically, but never free it
        int* ptr = new int[1000000];
        std::cout << ptr << " " << counter << std::endl;
        //delete ptr;
        counter++;
    }

    return 0;
}
