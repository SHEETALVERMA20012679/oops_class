#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    Animal(string _name) : name(_name) {}

    void Eat() {
        cout << name << " is eating." << endl;
    }
};

// Intermediate derived class
class Mammal : public Animal {
protected:
    int numLegs;

public:
    Mammal(string _name, int _numLegs) : Animal(_name) // calling constructor of parent class
    {
        numLegs = _numLegs;
    }

    void Walk() {
        cout << name << " is walking on " << numLegs << " legs." << endl;
    }
};

// Final derived class inheriting from Mammal
class Dog : public Mammal {
public:
    Dog(string _name, int _numLegs) : Mammal(_name, _numLegs) {}

    void Bark() {
        cout << name << " is barking." << endl;
    }
};

int main() {
    // Create an instance of the Dog class
    Dog myDog("Buddy", 4);

    // Access and modify protected members
    myDog.Eat();
    myDog.Walk();
    myDog.Bark();

    return 0;
}
