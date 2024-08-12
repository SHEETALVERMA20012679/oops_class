#include <iostream>
#include <string>

using namespace std;

// Base class 1
class Animal {
protected:
    string name;

public:
    Animal(string _name) : name(_name) {}

    void Eat() {
        cout << name << " is eating." << endl;
    }
};

// Base class 2
class FlyingCreature {
protected:
    int altitude;

public:
    FlyingCreature(int _altitude) : altitude(_altitude) {}

    void Fly() {
        cout << "Flying at altitude: " << altitude << " meters." << endl;
    }
};

// Derived class inheriting from both Animal and FlyingCreature
class Bird : public Animal, public FlyingCreature {
public:
    Bird(string _name, int _altitude) : Animal(_name), FlyingCreature(_altitude) {}

    void Chirp() {
        cout << name << " is chirping." << endl;
    }
};

int main() {
    // Creating an object of the derived class Bird
    Bird sparrow("Sparrow", 100);

    // Accessing methods from both base classes
    sparrow.Eat();  // Output: Sparrow is eating.
    sparrow.Fly();  // Output: Flying at altitude: 100 meters.
    sparrow.Chirp(); // Output: Sparrow is chirping.

    return 0;
}
