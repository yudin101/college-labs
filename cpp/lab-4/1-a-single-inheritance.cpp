#include <iostream>

class B {
private:
  int a;

public:
  int b;

  B(int a, int b) {
    this->a = a;
    this->b = b;
  }

  int getA() { return a; }
};

class D : public B {
private:
  int c = getA() * b;

public:
  D(int a, int b) : B(a, b) {}
  void getC() { std::cout << "c: " << c << "\n"; }
};

int main() {
  D dpub(6, 9);
  dpub.getC();

  std::cout << "Yudin Karki\n";
  return 0;
}
