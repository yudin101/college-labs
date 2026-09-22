#include <cmath>
#include <iostream>

class Polar {
public:
  float radius, theta;

  Polar(float radius, float theta) {
    this->radius = radius;
    this->theta = theta;
  }

  void display() {
    std::cout << "Polar: \n";
    std::cout << "radius: " << radius << "\n";
    std::cout << "theta: " << theta << "\n";
    std::cout << "---------------\n";
  }
};

class Rectangular {
public:
  float x, y;

  Rectangular(int x, int y) {
    this->x = x;
    this->y = y;
  }

  void display() {
    std::cout << "Rectangular: \n";
    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
    std::cout << "---------------\n";
  }

  operator Polar();
};

Rectangular::operator Polar() {
  float radius = std::sqrt((x * x) + (y * y));
  float theta = std::atan2(y, x);

  Polar temp(radius, theta);
  return temp;
}

int main() {
  Rectangular rec_coords(4, 2);
  rec_coords.display();

  Polar polar_coords = rec_coords;
  polar_coords.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
