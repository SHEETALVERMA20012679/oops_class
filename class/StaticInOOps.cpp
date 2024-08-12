#include <iostream>
using namespace std;

class MyClass {
public:
    static int staticCounter; // Static data member

    MyClass() {
        staticCounter++; // Incremented each time an object is created
    }

    static void displayCounter() {
        cout << "Static Counter: " << staticCounter << endl;
    }
};

int MyClass::staticCounter = 0; // Initialize the static data member

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass::displayCounter(); // Accessing the static member function

    return 0;
}
