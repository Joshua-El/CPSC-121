#include "rectangle.hpp"
#include <iostream>
#include <string>

Rectangle longest_rectangle(Rectangle rect1, Rectangle rect2) {
  if (rect1.length() > rect2.length()) {
    return rect1;
  } else {
    return rect2;
  }
}
