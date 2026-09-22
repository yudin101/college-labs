#include <iostream>

class Shape {
public:
  virtual float area() = 0;
};

class Circle : public Shape {
public:
  float radius;
  Circle(float r) : radius(r) {}
  float area() override { return 3.1416 * radius * radius; }
};

class Rectangle : public Shape {
public:
  float length, width;
  Rectangle(float l, float w) : length(l), width(w) {}
  float area() override { return length * width; }
};

int main() {
  Shape *s1 = new Circle(5);
  Shape *s2 = new Rectangle(4, 6);

  std::cout << "Circle area: " << s1->area() << "\n";
  std::cout << "Rectangle area: " << s2->area() << "\n";

  std::cout << "Yudin Karki\n";
  return 0;
}
