/*
 * Using const ensures that the calling function cannot modify a value sent by reference
 */

#include <iostream>
using namespace std;

void GetSquare(const int &number, int &result) {
	result = number * number;
}

int main() {

	int number = 10;

	int square = 0;

	GetSquare(number, square);

	cout << number << " " << square << endl;

	return 0;
}
