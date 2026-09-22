#include <iostream>

class Pair {
public:
  int a, b;

  void input(void);
  int smallest(void);
  void display(void);
};

void Pair::input(void) {
  std::cout << "Enter a and b: ";
  std::cin >> a >> b;
}

int Pair::smallest(void) { return a < b ? a : b; }

void Pair::display(void) { std::cout << "Smallest: " << smallest() << "\n"; }

int main() {
  Pair jodi;

  jodi.input();
  jodi.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
