#include <iostream>

class Car {
private:
  std::string name_;
  unsigned int mileage_;
  double price_;

public:
  void set_name(std::string name) { name_ = name; }
  void set_mileage(unsigned int mileage) { mileage_ = mileage; }
  void set_price(double price) { price_ = price; }

  std::string name() { return name_; }
  unsigned int mileage() { return mileage_; }
  double price() { return price_; }
};

Car lowest_price(Car cars[], unsigned int size);
