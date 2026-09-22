#include <iostream>

class Counter {
public:
  static int count;
  void increment() { count++; }
};

int Counter::count = 0;

int main() {
  Counter c1;
  Counter c2;

  std::cout << "Before Increment (c1): " << c1.count << "\n";
  c1.increment();
  std::cout << "After Increment (c2): " << c2.count << "\n";

  std::cout << "Yudin Karki\n";
  return 0;
}
