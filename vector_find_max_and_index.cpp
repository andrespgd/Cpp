#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v = {1, 2, 3, 4, 5};

  // Find the iterator to the maximum element.
  std::vector<int>::iterator it = std::max_element(v.begin(), v.end());

  // Get the value of the maximum element.
  int max_value = *it;
  int max_value_position =  std::distance(v.begin(), it);

  // Print the argument and value of the maximum element.
  std::cout << "max element pos: " << max_value_position << std::endl;
  std::cout << "max element val: " << max_value          << std::endl;

  // Print the vector to the screen
  std::cout << "Vector is: " << std::endl;
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
