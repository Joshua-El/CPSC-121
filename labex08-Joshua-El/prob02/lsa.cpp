#include "lsa.hpp"
#include <iostream>

int linear_search(int arr[], int num, int size) {
  int index = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] == num) {
      index = i;
    }
  }
  return index;
}
