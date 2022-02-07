#include "count-odd.hpp"
#include <iostream>

int main() {
  int num;
  std::cout << "Enter a number: ";
  std::cin >> num;

  if (num < 0) {
    std::cout << "Invalid input.\n";
  } else {
    int odd;
    odd = 0 + count_odd(num);

    std::cout << "The number of odds from 0 to " << num << " is " << odd
              << "\n";
  }

  return 0;
}
