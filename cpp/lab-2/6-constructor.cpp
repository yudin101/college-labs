#include <iostream>

class List {
public:
  int a, b;

  List(int a, int b) {
    this->a = a;
    this->b = b;
  }

  void display() {
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
  }
};

int main() {
  List list(3, 8);

  list.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
