#include <iostream>
#include <string>

class Student {
public:
  int roll_number;

  void inputRoll(int r) { roll_number = r; }
};

class Test : public Student {
public:
  float sub1, sub2;

  void inputMarks(float sub1, float sub2) {
    this->sub1 = sub1;
    this->sub2 = sub2;
  }
};

class Sport {
public:
  std::string name;
  std::string position;

  void inputSport(std::string name, std::string position) {
    this->name = name;
    this->position = position;
  }
};

class Result : public Test, public Sport {
public:
  float total;
  void displayTotal() { 
    total = sub1 + sub2;
    std::cout << "Total: " << total << "\n";
  }
};

int main() {
  Result student;

  student.inputRoll(2001);
  student.inputSport("Volleyball", "Spiker");
  student.inputMarks(45.0, 25.0);
  student.displayTotal();

  std::cout << "Yudin Karki\n";
  return 0;
}
