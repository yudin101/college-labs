#include <iostream>

class Complex {
public:
  int real, imaginary;

  Complex(int r, int i) {
    this->real = r;
    this->imaginary = i;
  }

  Complex operator+(Complex others) {
    int realSum = real + others.real;
    int imgSum = imaginary + others.imaginary;
    Complex temp(realSum, imgSum);
    return temp;
  }

  void display() { std::cout << real << "+" << imaginary << "i\n"; }
};

int main() {
  Complex n1(6, 9);
  Complex n2(4, 2);
  Complex n3 = n1 + n2;

  n3.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
