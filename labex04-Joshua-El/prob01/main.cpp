#include <iomanip>
#include <iostream>
int main() {
  double month_sale;
  double total_sale = 0;
  double average_monthly_sale;
  const int number_of_months = 12;
  std::cout << std::fixed << std::setprecision(2) << std::showpoint;
  std::cout << "Annual sales report\n===================\n"
            << "Please provide the monthly sales for the year.";
  for (int i = 1; i <= (number_of_months); i++) {
    std::cin >> month_sale;
    std::cout << "\nMonth " << i << ": $" << month_sale;
    total_sale += month_sale;
  }
  average_monthly_sale = (total_sale / number_of_months);
  std::cout << "\nTotal sales: $" << total_sale << "average_monthly sale: $"
            << average_monthly_sale;

  return 0;
}
