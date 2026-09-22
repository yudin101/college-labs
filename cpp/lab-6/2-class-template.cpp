#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair {
public:
  T1 first;
  T2 second;

  Pair(T1 a, T2 b) : first(a), second(b) {}

  void display() {
    cout << "First: " << first << "\n";
    cout << "Second: " << second << "\n";
  }
};

int main() {
  Pair<int, double> p1(5, 3.14);
  p1.display();

  Pair<string, int> p2("Age", 21);
  p2.display();

  cout << "Yudin Karki\n";
  return 0;
}
