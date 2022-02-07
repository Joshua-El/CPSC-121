#include "pet.hpp"
#include <iostream>

int main() {
  Pet pet_arr[100];
  int num_pet = 0;
  std::string name;
  std::string breed;
  std::string species;
  std::string color;
  double weight;
  do {
    std::cout << "Please enter the pet's name (q to quit): ";
    std::getline(std::cin, name);
    if (name != "q") {
      std::cout << "Please enter the pet's species: ";
      std::getline(std::cin, species);
      std::cout << "Please enter the pet's breed: ";
      std::getline(std::cin, breed);
      std::cout << "Please enter the pet's color: ";
      std::getline(std::cin, color);
      std::cout << "Please enter the pet's weight (lbs): ";
      std::cin >> weight;
      std::cin.ignore();

      pet_arr[num_pet] = Pet(name, species, breed, color, weight);
      num_pet++;
    }
  } while (name != "q");
  std::cout << "Printing Pets:\n";
  for (int i = 0; i < num_pet; i++) {
    std::cout << "Pet " << i + 1 << "\n";
    pet_arr[i].print();
  }
  return 0;
}
