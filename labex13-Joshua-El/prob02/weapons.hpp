#include <iostream>
#include <random>

class Weapon {
private:
  int attack_min_;
  int attack_max_;
  std::string name_;

public:
  Weapon() : Weapon(1, 2, "weapon") {}
  Weapon(int min, int max, std::string name)
      : attack_min_(min), attack_max_(max), name_(name) {}

  int attack_min() { return attack_min_; }
  int attack_max() { return attack_max_; }
  std::string name() { return name_; }

  virtual int attack() {
    int max = attack_max_;
    int min = attack_min_;
    return ((rand() % (max - min)) + min);
  }
};

class Daggers : public Weapon {
private:
  int crit_;
  int crit_dice_;

public:
  Daggers() : Daggers(2, 3, "daggers", 1, 18) {}
  Daggers(int min, int max, std::string name, int crit, int crit_dice)
      : Weapon(min, max, name), crit_(crit), crit_dice_(crit_dice) {}

  int crit() { return crit_; }
  int crit_dice() { return crit_dice_; }
  void set_crit(int crit) { crit_ = crit; }
  void set_crit_dice(int crit_dice) { crit_dice_ = crit_dice; }

  int attack() override;
};

class ShortSword : public Weapon {
private:
  int multiplier_ = 1;

public:
  ShortSword() : ShortSword(6, 7, "shortsword", 1) {}
  ShortSword(int min, int max, std::string name, int multiplier)
      : Weapon(min, max, name), multiplier_(multiplier) {}

  int multiplier() { return multiplier_; }
  void set_multiplier(int multiplier) { multiplier_ = multiplier; }

  int attack() override;
};

class Enemy {
private:
  std::string name_;
  int health_;

public:
  Enemy() : Enemy("dragon", 500) {}
  Enemy(std::string name, int health) : name_(name), health_(health) {}

  std::string name() { return name_; }
  int health() { return health_; }
  void set_name(std::string name) { name_ = name; }
  void set_health(int health) { health_ = health; }

  void receive_attack(Weapon* weapon);
};
