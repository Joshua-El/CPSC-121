#include "time.hpp"
#include <iostream>
#include <string>
std::string time_converter(int mil_time) {
  int seconds = 0;
  int hours = 0;
  std::string seconds_as_string;
  std::string hours_as_string;
  std::string meridium = "am";
  std::string regular_time;
  if (mil_time > 1200) {
    mil_time -= 1200;
    meridium = "pm";
  }
  seconds = (mil_time % 100);
  hours = (mil_time / 100);

  seconds_as_string = std::to_string(seconds);
  hours_as_string = std::to_string(hours);

  if (seconds < 10) {
    seconds_as_string = "0" + seconds_as_string;
  }

  regular_time = hours_as_string + ":" + seconds_as_string + " " + meridium;
  return regular_time;
}
