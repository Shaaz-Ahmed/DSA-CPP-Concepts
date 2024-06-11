// Constructor is a special types of a function that automatically called when the object is created.
// The class name and constructor should be same.
// Constructor should not have any return type or value it should always be public.


#include<iostream>
using namespace std;
class myClass{
public:
    myClass() {
    cout<<"Hello world this is a constructor";
    }
};


int main() {
 myClass myobj;

 return 0;
}

// ===========================================================================

// cosntructor can take parameter just like a function
// Inside the constructor we set the attribute equal to the constructor parameter.

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
