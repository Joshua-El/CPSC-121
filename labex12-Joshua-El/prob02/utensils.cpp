#include "utensils.hpp"
#include <iostream>

void Food::eat(double amount) {
  if (mass_ > amount) {
    mass_ -= amount;
  } else {
    mass_ = 0;
  }
}
