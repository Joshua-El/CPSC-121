#include "route.hpp"
#include <iostream>
#include <string>

int main() {
  int leaving_time;
  RouteManager routes;
  std::string exit_val = "False";
  char entered_val = 'A';
  std::string file_name;
  Route* temp1;
  CheckedRoute* temp2;

  std::cout << "Welcome to TuffyTravel!\n";
  while (entered_val != 'X') {
    std::cout << "\nWhat do you want to do?\n"
              << "R - create routes\n"
              << "C - create checked routes\n"
              << "D - Display routes\n"
              << "F - Find route\n"
              << "S - Save routes\n"
              << "L - Load routes\n"
              << "X - Exit\n"
              << "Action: ";

    std::cin >> entered_val;
    switch (entered_val) {
    case 'r':
    case 'R':
      std::cin.ignore();
      temp1 = create_route();
      routes.add(temp1);
      break;
    case 'c':
    case 'C':
      std::cin.ignore();
      temp2 = create_checked_route();
      routes.add(temp2);
    case 'd':
    case 'D':
      routes.display_routes();
      break;
    case 'f':
    case 'F':
      leaving_time = get_time_to_leave();
      routes.find_route(leaving_time);
      break;
    case 's':
    case 'S':
      file_name = get_filename();
      routes.save_routes(file_name);
      break;
    case 'l':
    case 'L':
      file_name = get_filename();
      routes.load_routes(file_name);
      break;
    case 'x':
    case 'X':
      entered_val = 'X';
      std::cout << "\n\nThank you for using TuffyTravel!\n";
      break;
    default:
      std::cout << "What you entered does not match any options.";
    }
  }
  return 0;
}
