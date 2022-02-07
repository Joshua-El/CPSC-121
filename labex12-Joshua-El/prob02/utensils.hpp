#include <iostream>

class Food {
private:
  std::string name_;
  double mass_;

public:
  Food() : Food("Apple Pie", 1000) {}
  Food(std::string name, double mass) : name_(name), mass_(mass) {}

  void set_name(std::string name) { name_ = name; }
  void set_mass(double mass) { mass_ = mass; }
  std::string name() { return name_; }
  double mass() { return mass_; }
  void eat(double amount);
  void print() { std::cout << name_ << " " << mass_ << "g\n"; }
};

class Utensil {
private:
  double size_;
  std::string color_;

public:
  Utensil() : Utensil(8.5, "silver") {}
  Utensil(double size, std::string color) : size_(size), color_(color) {}

  void set_size(double size) { size_ = size; }
  void set_color(std::string color) { color_ = color; }
  std::string color() { return color_; }
  double size() { return size_; }

  void use(Food& food) {}
};

class Spoon : public Utensil {
private:
  double bite_size_;

public:
  Spoon() : Spoon(6, "silver", 25) {}
  Spoon(double size, std::string color, double bite_size)
      : bite_size_(bite_size), Utensil(size, color) {}

  void set_bite_size(double bite_size) { bite_size_ = bite_size; }
  double bite_size() { return bite_size_; }
  void use(Food& food) { food.eat(bite_size_); }
};
