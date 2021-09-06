#include <iostream>
using namespace std;

int main() {

	int arrayFive[5];

	int *ptrArrayFive = arrayFive;

	cout << "pArrayFive    = " << ptrArrayFive << endl;

	cout << "&arrayFive[0] = " << &arrayFive[0] << endl;

	return 0;
}
