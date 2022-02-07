#include "rectangle.hpp"
#include <iostream>
#include <string>

int main() {
  unsigned int length1, width1, length2, width2;
  std::cout << "Rectangle 1\nPlease enter the length: ";
  std::cin >> length1;
  std::cout << "Please enter the width: ";
  std::cin >> width1;

  Rectangle rect1;
  rect1.set_length(length1);
  rect1.set_width(width1);

  std::cout << "Rectangle 1 created with length " << rect1.length();
  std::cout << " and width " << rect1.width();
  std::cout << "\nThe area of Rectangle 1 is: " << rect1.area();

  std::cout << "\n\nRectangle 2\n";
  std::cout << "Please enter the length: ";
  std::cin >> length2;
  std::cout << "Please enter the width: ";
  std::cin >> width2;

  Rectangle rect2;
  rect2.set_length(length2);
  rect2.set_width(width2);

  std::cout << "Rectangle 2 created with length " << rect2.length();
  std::cout << " and width " << rect2.width();
  std::cout << "\nThe area of Rectangle 2 is: " << rect2.area();

  std::cout << "\n\n";

  Rectangle longest = longest_rectangle(rect1, rect2);

  std::cout << "The longest rectangle has a length of " << longest.length()
            << ", a width of " << longest.width() << ", and an area of "
            << longest.area() << ".\n";
  return 0;
}
