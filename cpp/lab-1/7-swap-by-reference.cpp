#include <iostream>

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 10, b = 5;
  std::cout << "Before swap: \n";
  std::cout << "a: " << a << "\nb: " << b << "\n";

  swap(a, b);

  std::cout << "After swap: \n";
  std::cout << "a: " << a << "\nb: " << b << "\n";

  std::cout << "Yudin Karki\n";
  return 0;
}
