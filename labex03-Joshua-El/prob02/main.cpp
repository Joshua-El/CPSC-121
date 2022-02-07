#include <iostream>
int main() {
  int height;
  int const required_height = 55;
  std ::cout
      << "You must be at least 55 inches to safely ride the TuffyTwister.\n"
      << "Please enter your height in inches: ";
  std ::cin >> height;

  if (height >= required_height) {
    std ::cout << "Congratulations! You are tall enough to ride!";
  } else {
    std ::cout << "Safety is our first priority. Unfortunately, we can't let "
                  "you ride yet.";
  }
  return 0;
}
