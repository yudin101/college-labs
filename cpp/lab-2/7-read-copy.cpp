#include <iostream>

class Reader {
public:
  int a;

  void setInt() {
    std::cout << "Enter a: ";
    std::cin >> a;
  }

  int getInt() { return a; }

  Reader(const Reader &other) { a = other.a; }

  Reader() {}
};

int main() {
  Reader r1;
  r1.setInt();

  Reader r2(r1);

  std::cout << "r1: " << r1.getInt() << "\n";
  std::cout << "r2: " << r2.getInt() << "\n";

  std::cout << "Yudin Karki\n";
  return 0;
}
