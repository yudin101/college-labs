#include <iostream>

class Numbers {
public:
  int a, b;

  Numbers(int a, int b) {
    this->a = a;
    this->b = b;
  }

  void operator++() {
    ++a;
    ++b;
  }

  void operator++(int) {
    a++;
    b++;
  }

  void display() {
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
  }
};

int main() {
  Numbers n1(6, 9);
  n1++;
  ++n1;
  n1.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
