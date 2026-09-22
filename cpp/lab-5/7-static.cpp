#include <iostream>
using namespace std;

class Counter {
public:
  static int count;

  Counter() { count++; }

  static void showCount() {
    cout << "Number of objects created: " << count << "\n";
  }
};

int Counter::count = 0;

int main() {
  Counter c1, c2, c3;
  Counter::showCount();

  cout << "Yudin Karki\n";
  return 0;
}
