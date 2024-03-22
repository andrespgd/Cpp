#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, -3, -5};

  // Find the iterator to the maximum element.
  vector<int>::iterator it = max_element(v.begin(), v.end());

  // Get the value of the maximum element.
  int max_value = *it;

  // Print the argument and value of the maximum element.
  cout << "max element at position: " << distance(v.begin(), it) << endl;
  cout << "max element value: " << max_value << endl;

  return 0;
}
