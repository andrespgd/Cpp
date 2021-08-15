#include <array>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int rows = 10;
const int cols = 20;

// array1
float array_1_1d[rows] = {};
float array_1_2d[rows][cols] = {};

// array2
array<float,rows>               array_2_1d;
array<array<float, cols>, rows> array_2_2d;

// vector
vector<vector<float> > vec2d(rows, vector<float> (cols, 0.0));

int main() {

	cout << sizeof(array_1_1d)    << "\n";
	cout << sizeof(array_1_1d[0]) << "\n";
	cout << sizeof(array_1_1d) / sizeof(array_1_1d[0]) << "\n";
	cout << "\n";

    cout << sizeof(array_1_2d)    / sizeof(array_1_2d[0])    << "\n";
    cout << sizeof(array_1_2d[0]) / sizeof(array_1_2d[0][0]) << "\n";
	cout << "\n";

	cout << array_2_1d.size() << "\n";
	cout << "\n";

	cout << array_2_2d.size() << "\n";
	cout << array_2_2d[0].size() << "\n";
	cout << "\n";

	cout << vec2d.size() << "\n";
	cout << vec2d[0].size() << "\n";
	cout << "\n";

  return 0;
}
