#include <iostream>
#include <random> //C++ 11 Random Numbers

using namespace std;

// Random Generators
random_device rd;
mt19937 gen(rd());

// Global Functions
double mod(double first_term, double second_term);
double gen_real_random();

double gen_real_random()
{
    // Generate real random between 0 and 1
    uniform_real_distribution<double> real_dist(0.0, 1.0); //Real
    return real_dist(gen);
}

int main()
{
    cout << gen_real_random() << endl;
    return 0;
}