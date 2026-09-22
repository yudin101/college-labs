#include <iostream>

class Number {
public:
  int a;

  Number (int a) {
    this->a = a;
  }

  int operator>(Number other) {
    return a > other.a ? a : other.a;
  }
};

int main() {
  Number n1(6);
  Number n2(9);

  int largest = n1 > n2;

  std::cout << largest << "\n";

  std::cout << "Yudin Karki\n";
  return 0;
}
