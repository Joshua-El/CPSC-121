#include "candy_shop.hpp"
#include <iomanip>
#include <iostream>

int main() {
  // Create an instance of the `CandyShop` object called `cs`
  CandyShop cs;
  bool continue_menu = true;
  std::cout << "Welcome to the Candy Shop!\n"
            << std::setprecision(2) << std::fixed;

  // This is a loop to ask the user to enter in `Candy` objects
  do {
    std::string brand;
    std::string flavor;

    // This asks the user to enter in the brand of the candy
    std::cout << "Enter the brand of candy (q to quit): ";
    std::getline(std::cin, brand);

    // This sets the flag for continuing the loop or not
    // according to user input
    continue_menu = brand != "q" && brand != "Q";
    if (continue_menu) {
      Candy c;
      c.set_brand(brand);

      std::cout << "Enter the flavor of candy: ";
      std::getline(std::cin, flavor);
      c.set_flavor(flavor);

      double cost;
      // This asks the user to enter in the cost of the candy
      std::cout << "Enter the cost of candy: ";
      std::cin >> cost;
      c.set_cost(cost);
      std::cin.ignore();
      cs.add(c);
    }

  } while (continue_menu);
  // Print all the candy in the `CandyShop` bag using the appropriate member
  // function
  cs.print();

  double price = cs.total_price();
  // Get the total price of all the candy in the `CandyShop` bag
  // and assign it to the variable called `price`

  // This prints out the price of all the candy in the `CandyShop` bag
  std::cout << "\nThe total cost of all the candy in the bag is: $"
            << std::fixed << std::setprecision(2) << price << "\n";

  return 0;
}
