#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) { return a + b; }

template <class T>
T sub(T a, T b) { return a - b; }

template <class T>
T mul(T a, T b) { return a * b; }

template <class T>
T divide(T a, T b) { return a / b; }

int main() {
  int a = 10, b = 3;
  double x = 10.5, y = 2.5;

  cout << "Integers:\n";
  cout << "Add: " << add(a, b) << "\n";
  cout << "Sub: " << sub(a, b) << "\n";
  cout << "Mul: " << mul(a, b) << "\n";
  cout << "Div: " << divide(a, b) << "\n";

  cout << "Doubles:\n";
  cout << "Add: " << add(x, y) << "\n";
  cout << "Sub: " << sub(x, y) << "\n";
  cout << "Mul: " << mul(x, y) << "\n";
  cout << "Div: " << divide(x, y) << "\n";

  cout << "Yudin Karki\n";
  return 0;
}
