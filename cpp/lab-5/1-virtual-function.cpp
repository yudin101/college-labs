#include <iostream>

class Shape {
public:
  virtual float area() { return 0; }
};

class Rectangle : public Shape {
public:
  float length, breadth;

  Rectangle(float l, float b) {
    length = l;
    breadth = b;
  }

  float area() override { return length * breadth; }
};

class Circle : public Shape {
public:
  float radius;

  Circle(float r) { radius = r; }

  float area() override { return 3.1416 * radius * radius; }
};

int main() {
  Rectangle rect(5, 4);
  Circle circ(3);

  Shape *ptr;

  ptr = &rect;
  std::cout << "Rectangle area: " << ptr->area() << "\n";

  ptr = &circ;
  std::cout << "Circle area: " << ptr->area() << "\n";

  std::cout << "Yudin Karki\n";
  return 0;
}
