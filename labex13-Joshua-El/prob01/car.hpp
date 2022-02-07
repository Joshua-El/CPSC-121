#include <iostream>

class Car {
private:
  std::string name_;
  int year_;
  double speed_;

public:
  Car() : Car("Steam automobile", 1769) {}
  Car(const std::string& name, int year)
      : name_(name), year_(year), speed_(0) {}
  void set_name(const std::string& name) { name_ = name; }
  void set_year(int year) { year_ = year; }
  void set_speed(double speed) { speed_ = speed; }
  std::string name() const { return name_; }
  int year() const { return year_; }
  double speed() const { return speed_; }

  virtual bool is_empty() { return false; }
  virtual void drive(double speed) { speed_ = speed; }
};

class ElectricCar : public Car {
private:
  double battery_percentage_;

public:
  ElectricCar() : ElectricCar("Electric carriage", 1832) {}
  ElectricCar(std::string name, int year) : battery_percentage_(100.0) {
    set_name(name);
    set_year(year);
    set_speed(0);
  }
  bool is_empty() override;
  void drive(double speed) override;
};

class GasolineCar : public Car {
private:
  double tank_;
  double mpg_;

public:
  GasolineCar() : GasolineCar("Gasoline car", 1885, 12, 4) {}
  GasolineCar(std::string name, int year, double tank, double mpg)
      : tank_(tank), mpg_(mpg) {
    set_name(name);
    set_year(year);
    set_speed(0);
  }
  double tank() { return tank_; }
  double mpg() { return mpg_; }
  bool is_empty() override;
  void drive(double speed) override;
};
