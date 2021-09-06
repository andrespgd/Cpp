/*
 * -references enable you to work with memory locations
 * -particulary useful when writing code
 * -in typical functions copying step of an argument can consume a lot of memory
 * -reference allows to eliminate the copy steps, working directly on the data in the caller's stack
 */

#include <iostream>
using namespace std;

void GetSquare(int &number) {
	number *= number;
}

int main() {

	int number = 10;

	GetSquare(number);

	cout << number << endl; // outputs 100, number is no longer 10

	return 0;
}
