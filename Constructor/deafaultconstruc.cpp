#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    
    // Default constructor (no parameters)
    MyClass() {
        cout << "Default constructor called." << std::endl;
        value = 0;
    }

    // Parameterized constructor
    MyClass(int val) {
        cout << "Parameterized constructor called." << std::endl;
        value = val;
    }

    void displayValue() {
        cout << "Value: " << value << std::endl;
    }

};

int main() {
    MyClass obj1;         // Calls the default constructor
    MyClass obj2(42);     // Calls the parameterized constructor

    obj1.displayValue();
    obj2.displayValue();

    return 0;
}
