#include "route.hpp"
#include <fstream>
#include <iostream>
#include <string>

Route* create_route() {
  std::string name;
  int departure_time;
  int arrival_time;
  Route* temp = new Route;

  std::cout << "\nPlease enter the name of the route: ";
  getline(std::cin, name);
  std::cout << "Please enter the departure time of the route: ";
  std::cin >> departure_time;
  std::cout << "Please enter the arrival time of the route: ";
  std::cin >> arrival_time;

  temp->set_name(name);
  temp->set_departure_time(departure_time);
  temp->set_arrival_time(arrival_time);

  return temp;
}

CheckedRoute* create_checked_route() {
  std::string name;
  int departure_time;
  int take_off_time;
  int arrival_time;

  std::cout << "\nPlease enter the name of the checked route: ";
  getline(std::cin, name);
  std::cout << "Please enter the departure time of the checked route: ";
  std::cin >> departure_time;
  std::cout << "Please enter the take off time of the checked route: ";
  std::cin >> take_off_time;
  std::cout << "Please enter the arrival time of the checked route: ";
  std::cin >> arrival_time;

  CheckedRoute* temp = new CheckedRoute(name, departure_time, take_off_time, arrival_time);

  return temp;
}

void RouteManager::display_routes() {
  std::cout << "\nAvailable Routes:";
  for (int i = 0; i < size_; i++) {
    (*routes_[i]).display();
  }
}
int get_time_to_leave() {
  int time;
  std::cout << "\nPlease enter the time you wish to leave: ";
  std::cin >> time;

  return time;
}

void RouteManager::find_route(int leaving_time) {
  int route_index = -1;
  if (size_ == 0) {
    std::cout << "\nSorry, there are no routes available.\n";
  } else {
    Route best_route;
    bool found_route = false;
    for (int i = 0; i < size_; i++) {
      if (!found_route && routes_[i]->departure_time() >= leaving_time) {
        best_route = *routes_[i];
        found_route = true;
        route_index = i;
      } else if (found_route && routes_[i]->departure_time() >= leaving_time &&
                 routes_[i]->departure_time() < best_route.departure_time()) {
        best_route = *routes_[i];
        found_route = true;
        route_index = i;
      }
    }
    if (route_index == -1) {
      std::cout << "No route that leaves on or after.\n";

    } else {
      std::cout << "we suggest you take this route:";
      routes_[route_index]->display();
    }
  }
}

std::string get_filename() {
  std::string file_name;
  std::cout << "enter the file name";
  std::cin >> file_name;
  std::cin.ignore();
  return file_name;
}

void RouteManager::save_routes(std::string file_name) {
  std::ofstream file;
  file.open(file_name);
  file << size_ << "\n";
  for (int i = 0; i < size_; i++) {
    file << (*routes_[i]).save_string();
  }
  file.close();
  std::cout << "File saved!\n";
}

void RouteManager::load_routes(std::string file_name) {
  std::string type;
  std::string name;
  int departure;
  int take_off;
  int arrival;
  std::ifstream file;
  file.open(file_name);
  if (file) {
    file >> size_;
    file.ignore();
    for (int i = 0; i < size_; i++) {
      std::getline(file, type);
      std::getline(file,name);
      file >> departure;
      file >> arrival;
      file.ignore();

      if (type == "[CheckedRoute]") {
        file >> take_off;
        routes_[i] = new CheckedRoute(name, departure, take_off, arrival);
      } else {
        routes_[i] = new Route(name, departure, arrival);
      }
    }
    std::cout << "File loaded!";
  } else {
    std::cout << "File does not exist.";
  }
}
