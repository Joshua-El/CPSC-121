#include <iomanip>
#include <iostream>
int main() {
  int number_of_games;
  int discount = 0;
  double total = 0;
  double savings = 0;
  double price;
  const double deal = .20;
  const double discount_requirement = 60.00;
  std::cout << std::fixed << std::setprecision(2) << std::showpoint; 
  std::cout << "Please input the number of game(s) you want to purchase: ";
  std::cin >> number_of_games;
  if (number_of_games > 0) {
    for (int i = 1; i <= number_of_games; i++) {
      std::cout << "Enter the price of the game " << i << ": $";
      std::cin >> price;
      total += price;
      if (price >= discount_requirement) {
        discount = 1;
      }
    }
    if (discount == 1) {
      savings = total * deal;
      total -= savings;
    }
    std::cout << "The total cost of " << number_of_games << " game(s) is $"
              << total << "\nYou saved $" << savings << "\n";


  } else {
    std::cout
        << "You need to purchase at least 1 game. Please rerun the program.";
  }

  return 0;
}
