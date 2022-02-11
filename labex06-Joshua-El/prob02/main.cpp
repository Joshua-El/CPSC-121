#include "header.hpp"
#include <iostream>
#include <string>

int main() {
  std::string header;
  std::string text;
  std::cout << "Please enter header text: "; 
  std::getline(std::cin, text);

  if (within_width(text, 80)) {
    header = display_header(text);
    std::cout << header;
  } else {
    std::cout << text;
  }
  return 0;
}
