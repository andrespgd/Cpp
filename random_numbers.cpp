#include <time.h>
#include <iostream>

int main()
{
    // Initialize random number generator with time
    // If this line is commented out, you'll get the same numbers every time you run the program
    srand(time(0));


    std::cout<<"Random numbers generated between 0 and 1:"<<std::endl;
    for (int i = 0; i < 5; i++) 
    {
        std::cout << (float) rand()/RAND_MAX << std::endl;
    }

    std::cout<<"Random numbers generated between 1 and 10:"<<std::endl;
    for(int i=0;i<5;i++)
        std::cout << (rand() % 10) + 1<<std::endl; 

    return 0; 
}
