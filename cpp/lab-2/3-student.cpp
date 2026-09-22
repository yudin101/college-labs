#include <iostream>

class Student {
public:
  std::string name;
  std::string address;
  std::string faculty;
  int roll;

  void input(void) {
    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Enter address: ";
    std::cin >> address;

    std::cout << "Enter faculty: ";
    std::cin >> faculty;

    std::cout << "Enter roll no: ";
    std::cin >> roll;
  }

  void display(void);
};

void Student::display(void) {
  std::cout << "\nName: " << name << "\n";
  std::cout << "Address: " << address << "\n";
  std::cout << "Faculty: " << faculty << "\n";
  std::cout << "Roll No. " << roll << "\n";
}

int main() {
  Student yudin;

  yudin.input();
  yudin.display();

  return 0;
}
