#include <cmath>
#include <iostream>

class Polar {
public:
  float radius, theta;

  Polar(float raduis, float theta) {
    this->radius = raduis;
    this->theta = theta;
  }

  void display() {
    std::cout << "Polar: \n";
    std::cout << "raduis: " << radius << "\n";
    std::cout << "theta: " << theta << "\n";
    std::cout << "---------------\n";
  }
};

class Rectangular {
public:
  float x, y;

  Rectangular(Polar coords) {
    float radius = coords.radius;
    float theta = coords.theta;

    this->x = radius * std::cos(theta);
    this->y = radius * std::sin(theta);
  }

  void display() {
    std::cout << "Rectangular: \n";
    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
    std::cout << "---------------\n";
  }
};

int main() {
  Polar polar_coords(4.47214, 0.463648);
  polar_coords.display();

  Rectangular rec_coords(polar_coords);
  rec_coords.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
