#include <iostream>

class Numbers {
public:
  int a, b;

  Numbers(int a, int b) {
    this->a = a;
    this->b = b;
  }

  Numbers operator-() {
    Numbers temp(-a, -b);
    return temp;
  }

  void display() {
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
  }
};

int main() {
  Numbers n1(4, 5);
  Numbers n2 = -n1;

  n1.display();
  n2.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
