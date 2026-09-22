#include <iostream>

class Duration {
public:
  int hours;

  Duration(int h) {
    hours = h;
  }

  operator int() {
    return hours * 60;
  }
};

int main() {
  Duration h(4);

  std::cout << "Hour: " << h.hours << "\n";
  
  int minutes = h;
  std::cout << "Duration: " << minutes << "\n";

  std::cout << "Yudin Karki\n";
  return 0;
}
