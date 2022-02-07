#include <iostream>
int main() {
  int first_guest_age;
  int second_guest_age;
  double first_ticket_cost;
  double second_ticket_cost;

  std ::cout << "Welcome to HoliDeals at the Movies!\n"
             << "Tickets tonight can only be bought in pairs.\n";
  std ::cout << "Here are our movie ticket deals:\n";
  std ::cout << "Children - $10.00\n"
             << "Young Adults - $13.00\n"
             << "Adults - $15.00\n"
             << "Seniors - $10.00\n";
  std ::cout << "Please enter the age of the person for the first guest: ";
  std ::cin >> first_guest_age;
  std ::cout << "Please enter the age of the person for the second guest: ";
  std ::cin >> second_guest_age;

  if (first_guest_age < 13 || first_guest_age >= 65) {
    first_ticket_cost = 10;
  } else if (first_guest_age >= 13 && first_guest_age < 21) {
    first_ticket_cost = 13;
  } else {
    first_ticket_cost = 15;
  }

  if (second_guest_age < 13 || second_guest_age >= 65) {
    second_ticket_cost = 10;
  } else if (second_guest_age >= 13 && second_guest_age < 21) {
    second_ticket_cost = 13;
  } else {
    second_ticket_cost = 15;
  }

  std ::cout << "The Subtotal for the ticket cost is: $"
             << (first_ticket_cost + second_ticket_cost) << ".00";



  return 0;
}
