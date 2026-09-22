#include <iostream>
#include <string>

class Student {
public:
  int roll_number;

  Student() { roll_number = 0; }

  void inputRoll(int r) { roll_number = r; }

  void displayRoll() { std::cout << "Roll No: " << roll_number << "\n"; }
};

class Test : virtual public Student {
public:
  float sub1, sub2;

  void inputMarks(float sub1, float sub2) {
    this->sub1 = sub1;
    this->sub2 = sub2;
  }
};

class Sport : virtual public Student {
public:
  std::string name, position;

  void inputSport(std::string name, std::string position) {
    this->name = name;
    this->position = position;
  }
};

class Result : public Test, public Sport, virtual public Student {
public:
  float total;

  void displayTotal() {
    total = sub1 + sub2;
    displayRoll();
    std::cout << "Sport: " << name << " (" << position << ")\n";
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
