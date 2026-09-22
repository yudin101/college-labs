#include <iostream>

void new_function(int num) {
  std::cout << num << "\n";
}

void new_function(int num, char singleStr) {
  std::cout << num;
  std::cout << singleStr << "\n";
}

void new_function(int num, char singleStr, float decimalNumber) {
  std::cout << num;
  std::cout << singleStr;
  std::cout << decimalNumber << "\n";
}

int main() {
  new_function(4);
  new_function(2, 'h');
  new_function(0, 'i', 6.9);

  std::cout << "Yudin Karki\n";
  return 0;
}
