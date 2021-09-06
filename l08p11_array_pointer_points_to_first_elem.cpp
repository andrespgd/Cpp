#include <iostream>
using namespace std;

int main() {

	int arrayFive[5];

	int *pArrayFive = arrayFive;

	cout << "pArrayFive    = " << pArrayFive << endl;

	cout << "&arrayFive[0] = " << &arrayFive[0] << endl;

	return 0;
}
