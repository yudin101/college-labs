#include <iostream>

class Number {
public:
  int a;
 
  Number (int a) {
    this->a = a;
    std::cout << "int " << a << " -> Number object\n";
  }
 
  void display() {
    std::cout << "a: " << a << "\n";
  }
};

int main() {
  Number n1 = Number(69);
  n1.display();

  Number n2 = 42;
  n2.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
