#include "count-odd.hpp"
#include <iostream>

int count_odd(int num) {
  if (num == 0) {
    return 0;
  } else if (num % 2 == 0) {
    return count_odd(num - 1);
  } else {
    return (1 + count_odd(num - 1));
  }
}
