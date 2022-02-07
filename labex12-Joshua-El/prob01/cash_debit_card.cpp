#include "cash_debit_card.hpp"
#include <iostream>

void CashCard::charge(double charge) {
  if (balance_ > charge) {
    charge_balance(charge);
  } else {
    std::cout << "Insufficient funds\n";
  }
}
void DebitCard::charge(double charge) {
  if (balance() > charge) {
    charge_balance(charge);
  } else {
    charge_balance(30.00);
    std::cout << "Overdraft Fee of $30.00 Incurred\n";
    charge_balance(charge);
  }
}
