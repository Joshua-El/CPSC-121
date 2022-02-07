#include "get_longest_string.hpp"
#include <iostream>
#include <string>

int main() {
  const int ARRAY_SIZE = 5;
  // Create an array called inputs that can store 5 string values

  for (int i = 0; i < ARRAY_SIZE; i++) {
    std::cout << "Please enter string #" << i + 1 << ": ";
    // Store the user's input into the right location in the array
  }
  std::string longest;
  // Call the get_longest_string function and store the longest string from the
  // array into the variable called longest
  
  std::cout << "The longest string is: " << longest << std::endl;

  return 0;
}
