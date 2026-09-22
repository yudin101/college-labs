#include <iostream>

class Rectangle {
public:
  int length, breadth;

  void input(void) {
    std::cout << "Enter length and breadth: ";
    std::cin >> length >> breadth;
  }

  int area(void) { return length * breadth; }

  void display(void) { std::cout << "Area: " << area() << "\n"; }
};

int main() {
  Rectangle R;

  R.input();
  R.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
