#include <iostream>
#include <string>

class Person {
public:
  std::string name;
  int age;

  Person(std::string n, int a) : name(n), age(a) {}

  Person &elderThan(Person &other) {
    if (this->age >= other.age)
      return *this;
    else
      return other;
  }

  void display() {
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
  }
};

int main() {
  Person p1("Alice", 25);
  Person p2("Bob", 32);
  Person p3("Charlie", 28);

  Person &elderOfFirstTwo = p1.elderThan(p2);
  Person &eldest = elderOfFirstTwo.elderThan(p3);

  std::cout << "The eldest person is: \n";
  eldest.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
