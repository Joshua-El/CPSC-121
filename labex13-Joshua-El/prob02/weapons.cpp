#include "weapons.hpp"
#include <iostream>

int Daggers::attack() {
  int max = Weapon::attack_max();
  int min = Weapon::attack_min();
  int damage1 = ((rand() % (max - min)) + min);
  int damage2 = ((rand() % (max - min)) + min);

  int crit = ((rand() % (20)) + 1);
  if (crit > crit_dice_) {
    damage1 *= crit_;
  }
  if (crit > crit_dice_) {
    damage2 *= crit_;
  }
  return damage1 + damage2;
}

int ShortSword::attack() {
  int max = Weapon::attack_max();
  int min = Weapon::attack_min();
  int damage = ((rand() % (max - min)) + min);
  int multiplier = ((rand() % (2 - 1)) + 1);

  return (damage * multiplier);
}

void Enemy::receive_attack(Weapon* weapon) {
  int damage = (*weapon).attack();
  health_ -= damage;

  std::cout << (*weapon).name() << "dealt " << damage << " damage to " << name_;
  if (health_ <= 0) {
    std::cout << name_ << "has been slain!";
  }
}
