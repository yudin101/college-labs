#include <iostream>

class Alpha {
public:
  int alphaID;
  std::string alphaName;

  Alpha(int id, std::string name) {
    alphaID = id;
    alphaName = name;
  }
};

class Beta {
public:
  double betaValue;
  bool isBetaActive;

  Beta(double value, bool active) {
    betaValue = value;
    isBetaActive = active;
  }
};

class Gamma : public Alpha, public Beta {
public:
  char gammaCode;
  std::string combinedStatus;

  Gamma(int id, std::string name, double value, bool active, char code,
        std::string status)
      : Alpha(id, name), Beta(value, active) {
    gammaCode = code;
    combinedStatus = status;
  }

  void display() {
    std::cout << "Alpha ID: " << alphaID << "\n";
    std::cout << "Beta Value: " << betaValue << "\n";
    std::cout << "Gamma Code: " << gammaCode << "\n";
  }
};

int main() {
  Gamma entity(3, "Test", 6.9, false, 'X', "inactve");
  entity.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
