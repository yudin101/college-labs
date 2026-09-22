#include <iostream>

int main() {
  float gravity = 9.8;
  int mass;

  std::cout << "Enter mass: ";
  std::cin >> mass;

  std::cout << "Weight: " << mass * gravity << "\n";

  std::cout << "Yudin Karki\n";
  return 0;
}
