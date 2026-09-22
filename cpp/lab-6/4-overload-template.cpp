#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
  return a + b;
}

template <class T>
T add(T a, T b, T c) {
  return a + b + c;
}

int main() {
  cout << "Add two ints: " << add(2, 3) << "\n";
  cout << "Add three ints: " << add(1, 2, 3) << "\n";
  cout << "Add two doubles: " << add(2.5, 3.5) << "\n";

  cout << "Yudin Karki\n";
  return 0;
}
