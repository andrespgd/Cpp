#include <iostream>
using namespace std;

int main() {

	int x = 3;
	int * px;

	px = &x;
	cout << x << ' ' << px << ' ' << *px << endl;

	*px = 6;
	cout << x << ' ' << px << ' ' << *px << endl;

	x = 9;
	cout << x << ' ' << px << ' ' << *px << endl;

	return 0;

	/* OUTPUT
	----------
	3 0x7ffcf44d482c 3
	6 0x7ffcf44d482c 6
	9 0x7ffcf44d482c 9	
	*/
}
