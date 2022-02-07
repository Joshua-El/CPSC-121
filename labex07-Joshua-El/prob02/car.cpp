#include "car.hpp"
#include <iostream>

Car lowest_price(Car cars[], unsigned int size) {
  Car temp = cars[0];
  while (size > 1) {
    if (temp.price() > cars[size - 1].price()) {
      temp = cars[size - 1];
    }
    size--;
  }
  return temp;
}
