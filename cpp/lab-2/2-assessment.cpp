#include <iostream>

class Report {
public:
  int assessmentMarks, practicalMarks;

  void setmark(void) {
    std::cout << "Enter assessment marks: ";
    std::cin >> assessmentMarks;

    std::cout << "Enter practical marks: ";
    std::cin >> practicalMarks;
  }

  void publishmark(void) {
    std::cout << "Assessment Marks: " << assessmentMarks << "\n";
    std::cout << "Practical Marks: " << practicalMarks << "\n";
  }
};

int main() {
  Report r;

  r.setmark();
  r.publishmark();

  std::cout << "Yudin Karki\n";
  return 0;
}
