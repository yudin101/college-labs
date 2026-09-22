#include <iostream>

class Printer {
public:
  void printHello() { std::cout << "Hello\n"; }

  ~Printer() { std::cout << "Closing printer...\n"; }
};

int main() {
  {
    Printer p;
    p.printHello();
  }

  std::cout << "Yudin Karki\n";
  return 0;
}
