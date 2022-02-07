#include "pet.hpp"
#include <iostream>

void Pet::print() {
  std::cout << "Name: " << name_ << "\nSpecies: " << breed_.species()
            << "\nBreed: " << breed_.name() << "\nColor: " << breed_.color()
            << "\nWeight: " << weight_ << "\n";
}
