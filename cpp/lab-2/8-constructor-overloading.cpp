#include <array>
#include <iostream>

class Complex {
public:
  int real, imaginary;

  Complex(int real) { this->real = real; }

  Complex(int real, int imaginary) {
    this->real = real;
    this->imaginary = imaginary;
  }

  std::array<int, 2> add(Complex num) {
    int realSum = real + num.real;
    int imagSum = imaginary + num.imaginary;

    std::array<int, 2> parts = {realSum, imagSum};
    return parts;
  }
};

int main() {
  Complex first(3);
  first.imaginary = 3;
  Complex second(4, 7);

  std::array<int, 2> parts = first.add(second);

  std::cout << parts[0] << "+" << parts[1] << "i\n";

  std::cout << "Yudin Karki\n";
  return 0;
}
