#include <string>
#include <iostream>

using namespace std;

class Car {
  public:
    string brand;
    string model;
    int    year;
    float  miles = 0.0;
};

int main() {

  Car car1;
  car1.brand  = "Toyota";
  car1.model  = "Camry";
  car1.year   = 2021;

  Car car2;
  car2.brand  = "Ford";
  car2.model  = "Mustang";
  car2.year   = 1969;
  car2.miles  = 200'000.0;

  cout << car1.brand << "," << car1.model << "," << car1.year << "," << car1.miles << "\n";
  cout << car2.brand << "," << car2.model << "," << car2.year << "," << car2.miles << "\n";

  return 0;
}
