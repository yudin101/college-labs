#include <cmath>
#include <iostream>

class Rectangular {
public:
  float x, y;

  Rectangular(float x, float y) {
    this->x = x;
    this->y = y;
  }

  void display() {
    std::cout << "Rectangular: \n";
    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
    std::cout << "-------------\n";
  }
};

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
    std::cout << "-------------\n";
  }

  operator Rectangular();
};

Polar::operator Rectangular() {
  float x = radius * std::cos(theta);
  float y = radius * std::sin(theta);

  Rectangular temp(x, y);
  return temp;
}

int main() {
  Polar polar_coords(10.8167, 0.982794);
  polar_coords.display();

  Rectangular rec_coords = polar_coords;
  rec_coords.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
