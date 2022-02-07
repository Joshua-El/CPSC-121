#include "lsa.hpp"
#include <iostream>

int main() {
  int array[10] = {3, 16, 22, 8, 11, 0, 55, 34, 27, 31};
  int choice;
  std::cout << "Array: ";
  for (int i = 0; i < 10; i++) {
    std::cout << array[i] << " ";
  }
  std::cout << "\n";
  std::cout << "Please enter a number you want to search for: ";
  std::cin >> choice;
  int index;
  index = linear_search(array, choice, 10);

  if (index == -1) {
    std::cout << choice << " is not in the array"
              << "\n";
  } else {
    std::cout << "The index of " << choice << " in the array is: " << index
              << "\n";
  }
  return 0;
}
