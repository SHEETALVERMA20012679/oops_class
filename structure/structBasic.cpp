#include <iostream>
using namespace std;

// Define the structure
struct MyStruct {
    int x;
    double y;
    char c;
};

int main() {
    // Declare and initialize a structure variable
    MyStruct myObject;
    myObject.x = 10;
    myObject.y = 3.14;
    myObject.c = 'A';

    // Access and use structure members
    cout << "x: " << myObject.x << endl;
    cout << "y: " << myObject.y << endl;
    cout << "c: " << myObject.c << endl;
   
   // Please note, we can initialize struct variable like this also:
   // MyStruct structObj = {3, 7.4, 'D'};

    return 0;
}
