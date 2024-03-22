#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // Create a vector of integers
  std::vector<int> v = {1, 5, 3, 4, 2};

  // Find the largest value in the vector
  int max_value = *std::max_element(v.begin(), v.end());

  // Find the index of the largest value
  int max_index = std::distance(v.begin(), std::max_element(v.begin(), v.end()));

  // Print the argument and value of the maximum element.
  std::cout << "max element pos: " << max_index << std::endl;
  std::cout << "max element val: " << max_value << std::endl;

  // Print the vector to the screen
  std::cout << "Vector is: " << std::endl;
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
