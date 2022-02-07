#include "candy_shop.hpp"
#include <iomanip>
#include <iostream>

void CandyShop::add(Candy candy) {
  if (size_ < 10) {
    types_[size_] = candy;
    size_++;
  } else {
    std::cout << "Error, bag is full!";
  }
}
void CandyShop::print() {
  for (int i = 0; i < size_; i++) {
    std::cout << "Candy " << i + 1 << "Brand: " << types_[i].brand()
              << "Flavor: " << types_[i].flavor() << "Cost: $"
              << types_[i].cost();
  }
}
double CandyShop::total_price() {
  std::cout << std::setprecision(2) << std::fixed;
  double total;
  for (int i = 0; i < size_; i++) {
    total += types_[i].cost();
  }
  return total;
}
