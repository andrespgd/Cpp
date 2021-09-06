#include <iostream>
using namespace std;

int main() {

	const int ARRAY_LEN = 5;

	int arrayFive[ARRAY_LEN] = { 1, 2, 3, 4, 5 };

	int *ptrToArrayFive = arrayFive;

	for (int ix = 0; ix < sizeof(arrayFive) / sizeof(arrayFive[0]); ++ix)
		cout << ix << " " << arrayFive[ix] << endl;
	cout << endl;

	for (int ix = 0; ix < ARRAY_LEN; ++ix)
		cout << ix << " " << *(arrayFive + ix) << endl;
	cout << endl;

	for (int ix = 0; ix < ARRAY_LEN; ++ix)
		cout << ix << " " << ptrToArrayFive[ix] << endl;
	cout << endl;

	return 0;
}
