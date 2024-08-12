#include <iostream>
#include <string>

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

// Intermediate derived class inheriting from Animal
class Mammal : public Animal {
public:
    Mammal(string _name) : Animal(_name) {}

    void Breathe() {
        cout << name << " is breathing." << endl;
    }
};

// Another base class
class Bird {
protected:
    int altitude;

public:
    Bird(int _altitude) : altitude(_altitude) {}

    void Fly() {
        cout << "Flying at altitude: " << altitude << " meters." << endl;
    }
};

// Derived class inheriting from both Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    Bat(string _name, int _altitude) : Mammal(_name), Bird(_altitude) {}

    void EchoLocate() {
        cout << name << " is using echolocation." << endl;
    }
};

int main() {
    // Creating an object of the derived class Bat
    Bat vampireBat("Vampire Bat", 200);

    // Accessing methods from multiple base classes and intermediate classes
    vampireBat.Eat();        // Output: Vampire Bat is eating.
    vampireBat.Breathe();    // Output: Vampire Bat is breathing.
    vampireBat.Fly();        // Output: Flying at altitude: 200 meters.
    vampireBat.EchoLocate(); // Output: Vampire Bat is using echolocation.

    return 0;
}
