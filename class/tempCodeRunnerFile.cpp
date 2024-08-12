#include <iostream>

using namespace std;

class Circle {
public:
  double radius;

  // Default constructor
  Circle() {
    radius = 1.0;
  }

  // Constructor with one parameter
  Circle(double radius) {
    this->radius = radius;
  }

  // Calculate the area of the circle
  double getArea() {
    return 3.14159 * radius * radius;
  }
}; 

int main() {
  // Create a circle using the default constructor
  Circle c1;
  cout << "The area of circle c1 is " << c1.getArea() << endl;

  // Create a circle using the constructor with one parameter
  Circle c2(5.0);
  cout << "The area of circle c2 is " << c2.getArea() << endl;

  return 0;
}