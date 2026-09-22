#include <iostream>

class Student {
public:
  int roll_number;

  void inputRoll(int r) { roll_number = r; }
};

class Test : public Student {
public:
  float sub1;
  float sub2;

  void inputMarks(float sub1, float sub2) {
    this->sub1 = sub1;
    this->sub2 = sub2;
  }
};

class Result : public Test {
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
  student.inputMarks(45.0, 25.0);
  student.displayTotal();

  std::cout << "Yudin Karki\n";
  return 0;
}
