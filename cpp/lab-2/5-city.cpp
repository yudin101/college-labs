#include <cstring>
#include <iostream>

class City {
public:
  char cityName[20];
  float distFromKtm;

  void setCityName(char name[20]) { strcpy(cityName, name); }

  void setDistFromKtm(float dist) { distFromKtm = dist; }

  char *getCityName() { return cityName; }

  float getDistFromKtm() { return distFromKtm; }

  float addDistance(City city1, City city2) {
    return city1.distFromKtm + city2.distFromKtm;
  }
};

int main() {
  City pkr, dhan, jhp;
  char temp[20];

  strcpy(temp, "Pokhara");
  pkr.setCityName(temp);
  pkr.setDistFromKtm(200.0);

  strcpy(temp, "Dhangadhi");
  dhan.setCityName(temp);
  dhan.setDistFromKtm(630.0);

  int sum = jhp.addDistance(pkr, dhan);

  std::cout << "Sum of distance: " << sum << "\n";
  std::cout << "Yudin Karki\n";
  return 0;
}
