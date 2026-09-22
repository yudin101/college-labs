#include <iostream>

struct Employee {
  std::string name;
  int age;
  float salary;
};

int main() {
  Employee emp;
  using namespace std;

  cout << "Enter name: ";
  cin >> emp.name;
  cout << "Enter age: ";
  cin >> emp.age;
  cout << "Enter salary: ";
  cin >> emp.salary;

  cout << "\nName: " << emp.name << "\n";
  cout << "Age: " << emp.age << "\n";
  cout << "Salary: " << emp.salary << "\n";

  return 0;
}
