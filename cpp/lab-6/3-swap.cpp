#include <iostream>
using namespace std;

template <class T>
void swapNumbers(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  int x = 5, y = 10;
  cout << "Before:\n";
  cout << "x: " << x << "\n";
  cout << "y: " << y << "\n";

  swapNumbers(x, y);

  cout << "After:\n";
  cout << "x: " << x << "\n";
  cout << "y: " << y << "\n";

  cout << "Yudin Karki\n";
  return 0;
}
