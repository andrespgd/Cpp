/*

-Ensure that the called function is only allowed
 to modify params that you want to let it modify

-Ex. should not be allowed to modify neither Pi nor Radius

-"const" is used to control what a function
 is allowed to modify and what it isn't

Clockwise/Spiral Rule (see image):
---------------------------------
int*              - pointer to int
int const *       - pointer to const int
int * const       - const pointer to int
int const * const - const pointer to const int

Example:
-------
const double* const pPi
pPi is a const-pointer to const-double

*/

#include <iostream>
using namespace std;

void CalculateAreaOfCircle(
		const double* const pPi,
		const double* const pRadius,
		double*       const pArea
		)
{
	if (pPi && pRadius && pArea)
		*pArea = (*pPi) * (*pRadius) * (*pRadius);
}

int main(){

	const double Pi =   3.1416;
	double radius   = 100.0;
	double area   =     0.0;

	CalculateAreaOfCircle(&Pi, &radius, &area);

	cout << "the area is= " << area << endl;

	return 0;
}
