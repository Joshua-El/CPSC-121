#include "car.hpp"
#include <iomanip>
#include <iostream>

bool ElectricCar::is_empty() {
  if (battery_percentage_ == 0) {
    return true;
  } else {
    return false;
  }
}

void ElectricCar::drive(double speed) {
  if (battery_percentage_ > 0) {
    battery_percentage_ -= (speed / 4);
    Car::drive(speed);
  }
  if (battery_percentage_ <= 0) {
    Car::drive(0);
  }
}

bool GasolineCar::is_empty() {
  if (tank_ == 0) {
    return true;
  } else {
    return false;
  }
}

void GasolineCar::drive(double speed) {
  if (tank_ > 0) {
    tank_ -= (speed / mpg_);
    Car::drive(speed);
  }
  if (tank_ <= 0) {
    Car::drive(0);
  }
}
