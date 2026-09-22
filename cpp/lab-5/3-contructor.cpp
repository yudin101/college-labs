#include <iostream>
#include <string>

class Student {
public:
  int roll_number;

  Student(int r) : roll_number(r) {}

  void displayRoll() { std::cout << "Roll No: " << roll_number << "\n"; }
};

class Test : virtual public Student {
public:
  float sub1, sub2;

  Test(int r, float s1, float s2) : Student(r), sub1(s1), sub2(s2) {}
};

class Sport : virtual public Student {
public:
  std::string name, position;

  Sport(int r, std::string n, std::string p)
      : Student(r), name(n), position(p) {}
};

class Result : public Test, public Sport, virtual public Student {
public:
  float total;

  Result(int r, float s1, float s2, std::string n, std::string p)
      : Student(r), Test(r, s1, s2), Sport(r, n, p), total(0) {}

  void displayTotal() {
    total = sub1 + sub2;
    displayRoll();
    std::cout << "Sport: " << name << " (" << position << ")\n";
    std::cout << "Total: " << total << "\n";
  }
};

int main() {
  Result student(2001, 45.0, 25.0, "Volleyball", "Spiker");

  student.displayTotal();

  std::cout << "Yudin Karki\n";
  return 0;
}
