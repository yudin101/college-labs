#include <iostream>

class Car {
public:
  std::string manufacturer;
  std::string model;
  int year;

  Car() {}
  Car(std::string ma, std::string mo, int y) {
    this->manufacturer = ma;
    this->model = mo;
    this->year = y;
  }

  Car operator=(Car other) {
    manufacturer = other.manufacturer;
    model = other.model;
    year = other.year;
    Car temp(manufacturer, model, year);
    return temp;
  }

  void display() {
    std::cout << "Manufacturer: " << manufacturer << "\n";
    std::cout << "Model: " << model << "\n";
    std::cout << "Year: " << year << "\n";
  }
};

int main() {
  Car c1("Toyota", "AE86", 1983);
  Car c2;

  c2 = c1;
  c2.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
