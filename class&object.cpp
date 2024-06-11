// A class is a blueprint(template) and a class is a user defined .
// Inside class you can declare the functions and access it using object
// Object is a instance of a class
//Steps to class and object.
// Fist we have to create the class using class keyword and inside that we have to give access specifier inside that we have
// - to declare the variable(methods)
// after declaring the variable we have to create the object of that class and we have to access the function using object and . operator

#include<iostream>
#include<string>
using namespace std;

class Car{
public:
    int age;
    string name;
};
int main() {
 Car myobj;

 myobj.age = 20;
 myobj.name = "Shaaz";

 cout<<myobj.age<<"\n";
 cout<<myobj.name<<"\n";

 return 0;
}
// So heres the sample program of class
