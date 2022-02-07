#include <string>
#include <fstream>
#include <iostream>
int main() {
  std::string phone_book_name;
  std::string number;
  std::string name;
  std::string temp;
  int contact_counter = 1;
  std::fstream file;

  std::cout << "Please provide the file name for your phone book: ";
  std::cin >> phone_book_name;
  file.open(phone_book_name);
  std::cin.ignore();

   if(phone_book_name.compare("phonebook.txt") != 0){
     std::cout << "Invalid phonebook file!\n";
  }else {
    do{
      std::cout << "\nContact " << contact_counter << ":";
      std::cout << "\nPlease provide the name: ";
      std::getline(std::cin, name);
      if (name != "Done") {
        std::cout << "Please provide their number: ";
        std::getline(std::cin, number);
        file << "Contact " << contact_counter << ":" << name << "\n" << number << "\n";
        contact_counter++;
      }
    }while (name != "Done");
  }

file.close();

  return 0;
}
