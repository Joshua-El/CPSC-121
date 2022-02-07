#include "bubble.hpp"
#include <iomanip>
#include <iostream>
int main() {
  // Create two bubble objects called bubble1 and bubble 2

  double radius1, radius2;
  std::cout << "Please enter the radius of the first bubble: ";
  std::cin >> radius1;
  // Set the radius of bubble1 to radius1

  std::cout << "Please enter the radius of the second bubble: ";
  std::cin >> radius2;
  // Set the radius of bubble2 to radius2

  // Create a new bubble object called combined

  // Call the combine_bubble function to combine the bubble1 and bubble2 objects
  // then store the result in the combined variable

  double volume;
  // Get the volume of output and store it in the the variable called volume

  std::cout
      << "The bubbles have now combined and created a bubble with the volume "
         "of: "
      << std::fixed << std::setprecision(2) << volume << std::endl;
  return 0;
}
