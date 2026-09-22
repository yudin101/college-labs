#include <iostream>

inline float average(int a, int b) {
  return (float)(a + b) / 2;
}

int main() {
  std::cout << "Average: " << average(3, 4) << "\n";

  std::cout << "Yudin Karki\n";
  return 0;
}
