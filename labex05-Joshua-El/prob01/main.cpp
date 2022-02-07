#include <fstream>
#include <iostream>
int main() {
  std::string phone_book_name;
  std::string number;
  std::string name;
  int contact_counter = 1;
  std::ofstream file;

  std::cout << "Please provide the file name for your phone book: ";
  std::cin >> phone_book_name;
  file.open(phone_book_name);
  std::cin.ignore();

  std::cout << "\nPlease provide the name: ";
  std::getline(std::cin, name);

  if (name != "Done") {
    std::cout << "Please provide their number: ";
    std::getline(std::cin, number);
    file << name << "\n" << number << "\n";
    contact_counter++;
  }

  while (name != "Done") {
    std::cout << "\nContact " << contact_counter << ":";
    std::cout << "\nPlease provide the name: ";
    std::getline(std::cin, name);
    if (name != "Done") {
      std::cout << "Please provide their number: ";
      std::getline(std::cin, number);
      file << name << "\n" << number << "\n";
      contact_counter++;
    }
  }
  std::cout << "\nSaving phonebook into " << phone_book_name;
  std::cout << "\nDone!\n";

  file.close();
  return 0;
}
