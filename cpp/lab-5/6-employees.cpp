#include <iostream>
#include <string>
using namespace std;

class Employee1;
class Employee2;
class Employee3;
float totalSalary(Employee1 &, Employee2 &, Employee3 &);

class Employee1 {
  string name, address;
  float salary;

public:
  Employee1(string n, string a, float s) : name(n), address(a), salary(s) {}
  void display() {
    cout << name << ", " << address << ", Salary: " << salary << "\n";
  }
  friend float totalSalary(Employee1 &, Employee2 &, Employee3 &);
};

class Employee2 {
  string name, address;
  float salary;

public:
  Employee2(string n, string a, float s) : name(n), address(a), salary(s) {}
  void display() {
    cout << name << ", " << address << ", Salary: " << salary << "\n";
  }
  friend float totalSalary(Employee1 &, Employee2 &, Employee3 &);
};

class Employee3 {
  string name, address;
  float salary;

public:
  Employee3(string n, string a, float s) : name(n), address(a), salary(s) {}
  void display() {
    cout << name << ", " << address << ", Salary: " << salary << "\n";
  }
  friend float totalSalary(Employee1 &, Employee2 &, Employee3 &);
};

float totalSalary(Employee1 &e1, Employee2 &e2, Employee3 &e3) {
  return e1.salary + e2.salary + e3.salary;
}

int main() {
  Employee1 e1("Alice", "KTM", 45000);
  Employee2 e2("Bob", "PKR", 38000);
  Employee3 e3("Charlie", "JHP", 52000);

  e1.display();
  e2.display();
  e3.display();
  cout << "Total Salary: " << totalSalary(e1, e2, e3) << "\n";

  cout << "Yudin Karki\n";
  return 0;
}
