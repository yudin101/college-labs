#include <iostream>

class Number {
public:
  int num;

  Number() {}

  Number(int n) { num = n; }

  int getNum() { return num; }

  Number addNum(Number other) {
    Number result;
    result.num = this->num + other.num;
    return result;
  }
};

int main() {
  Number n1(6);
  Number n2(9);
  Number n3;

  n3 = n1.addNum(n2);

  std::cout << "First: " << n1.getNum() << "\n";
  std::cout << "Second: " << n2.getNum() << "\n";
  std::cout << "Third: " << n3.getNum() << "\n";

  std::cout << "Yudin Karki\n";

  return 0;
}
