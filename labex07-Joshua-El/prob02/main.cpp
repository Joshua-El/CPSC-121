#include "car.hpp"
#include <iomanip>
#include <iostream>

int main() {
  Car cars[3];
  for (int i = 0; i < 3; i++) {
    std::string name; 
    double price;
    unsigned int mileage;
    std::cout << "Car #" << i + 1 << "\n";
    std::cout << "Please enter the name: ";
    std::getline(std::cin, name);
    std::cout << "Please enter the milage: ";
    std::cin >> mileage;
    std::cout << "Please enter the price: ";
    std::cin >> price;
    std::cin.ignore();

    cars[i].set_name(name);
    cars[i].set_mileage(mileage);
    cars[i].set_price(price);
  }
  Car lowest = lowest_price(cars, 3);

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "\nThe car with the lowest price is " << lowest.name();
  std::cout << " with a mileage of " << lowest.mileage();
  std::cout << " and a price of $" << lowest.price();

  std::cout << "\n";

  return 0;
}
