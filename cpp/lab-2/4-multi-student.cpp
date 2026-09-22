#include <iostream>

class Student {
public:
  char name[20];
  int roll_no;
  std::string address;

  void input_data() {
    std::cout << "\nEnter name: ";
    std::cin >> name;

    std::cout << "Enter roll no: ";
    std::cin >> roll_no;

    std::cout << "Enter address: ";
    std::cin >> address;
  }

  void display_data() {
    std::cout << "\nName: " << name << "\n";
    std::cout << "Roll No. " << roll_no << "\n";
    std::cout << "Address: " << address << "\n";
  }
};

int main() {
  Student yudin;
  Student mahesh;

  yudin.input_data();
  mahesh.input_data();

  std::cout << "--------------------";

  yudin.display_data();
  mahesh.display_data();

  return 0;
}
