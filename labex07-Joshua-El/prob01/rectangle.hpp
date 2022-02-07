#include <iostream>
class Rectangle {
private:
  unsigned int length_, width_, area_;

public:
  void set_length(unsigned int length) { length_ = length; }
  void set_width(unsigned int width) { width_ = width; }
  void set_area(unsigned int area) { area_ = area; }

  unsigned int length() { return length_; }
  unsigned int width() { return width_; }
  unsigned int area() { return length_ * width_; }
};

Rectangle longest_rectangle(Rectangle rect1, Rectangle rect2);
