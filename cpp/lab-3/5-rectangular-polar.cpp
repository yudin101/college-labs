#include <cmath>
#include <iostream>

class Rectangular {
public:
  int x, y;

  Rectangular(int x, int y) {
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

  Polar(Rectangular coords) {
    int x = coords.x;
    int y = coords.y;

    radius = std::sqrt((x * x) + (y * y));
    theta = std::atan2(y, x);
  }

  void display() {
    std::cout << "Polar: \n";
    std::cout << "radius: " << radius << "\n";
    std::cout << "theta: " << theta << "\n";
    std::cout << "-------------\n";
  }
};

int main() {
  Rectangular rec_coords(6, 9);
  Polar polar_coords(rec_coords);

  rec_coords.display();
  polar_coords.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
