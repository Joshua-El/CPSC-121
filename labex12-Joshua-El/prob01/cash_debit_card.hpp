#include <iostream>

class CashCard {
private:
  double balance_;
  std::string name_;

protected:
  void charge_balance(double charge) { balance_ -= charge; }

public:
  CashCard() : CashCard(100.00, "Alex Amarnani") {}
  CashCard(double balance, std::string name) : name_(name), balance_(balance) {}

  double balance() { return balance_; }
  std::string name() { return name_; }
  void set_name(std::string name) { name_ = name; }
  void set_balance(double balance) { balance_ = balance; }

  void charge(double charge);
};

class DebitCard : public CashCard {
public:
  DebitCard() : DebitCard(100.00, "Sidney Lee") {}
  DebitCard(double balance, std::string name) : CashCard(balance, name) {}

  void charge(double charge);
};
