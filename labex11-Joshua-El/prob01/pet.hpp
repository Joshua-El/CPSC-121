#include <iostream>

class Breed {
private:
  std::string species_, name_, color_;

public:
  Breed() : species_("Dog"), name_("Pug"), color_("Fawn") {}
  Breed(std::string species, std::string name, std::string color)
      : species_(species), name_(name), color_(color) {}

  std::string species() { return species_; }
  std::string name() { return name_; }
  std::string color() { return color_; }

  void set_species(std::string species) { species_ = species; }
  void set_name(std::string name) { name_ = name; }
  void set_color(std::string color) { color_ = color; }
};

class Pet {
private:
  std::string name_;
  Breed breed_;
  double weight_;

public:
  Pet() : name_("Doug"), weight_(15.6) {}
  Pet(std::string name, Breed breed, double weight)
      : name_(name), breed_(breed), weight_(weight) {}
  Pet(std::string pet_name, std::string species, std::string species_name,
      std::string color, double weight)
      : name_(pet_name), breed_(species, species_name, color), weight_(weight) {
  }

  std::string name() { return name_; }
  Breed breed() { return breed_; }
  double weight() { return weight_; }

  void set_name(std::string name) { name_ = name; }
  void set_breed(Breed breed) { breed_ = breed; }
  void set_breed(std::string species, std::string name, std::string color) {
    Breed temp(species, name, color);
    breed_ = temp;
  }
  void set_weight(double weight) { weight_ = weight; }
  void print();
};
