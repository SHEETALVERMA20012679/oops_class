#include <iostream>
using namespace std;

class Car {
public:
    string carName;

    // Parameterized constructor
    Car(string carName){
      this->carName = carName;
    }

    // Copy Constructor
    Car(Car &c){
      carName = c.carName;
    }
};

int main() {
    Car originalCar("Beat"); // Parameterized constructor called here
    cout<<originalCar.carName<<endl;

    Car copiedCar(originalCar); // Copy constructor called here
    cout<<copiedCar.carName<<endl;

    return 0;
}
