#include "weapons.hpp"
#include <iostream>

int main() {
  std::string e_name;
  int e_health;
  std::cout << "Please enter the name of an enemy: ";
  std::getline(std::cin, e_name);
  std::cout << "Please enter the enemy's health: ";
  std::cin >> e_health;
  // Create an Enemy object using the name and health provided by the user.
  Enemy enemy(e_name, e_health);
  // Dynamically create a Dagger object in the heap and store it in a Weapon
  // pointer Dynamically create a ShortSword object  in the heap and store it in
  // a Weapon pointe
  Weapon* w1 = new Daggers;
  Weapon* w2 = new ShortSword;
  // Call the enemy object's receive_attack method and pass the first weapon as
  // the argument
  enemy.receive_attack(w1);
  // Call the enemy object's receive_attack method and pass the second weapon as
  // the argument
  enemy.receive_attack(w2);
  // Delete all dynamically created objects in the heap
  delete w1;
  delete w2;
  w1 = nullptr;
  w2 = nullptr;
  return 0;
}
