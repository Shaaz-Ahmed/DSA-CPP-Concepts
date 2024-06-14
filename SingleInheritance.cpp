// Inheritance means the properties of a class that is derived to another class.
// for example daddy is having good hairs so its passed to son . the son is also having good hairs
// It is possible to inherit the function and attributes from one class to another class.
// There are two types of class 1. Base class 2. Derived class.
// 1. Base class is the parent class
// 2. Derived class is the class that inherit from another class.
//. Types of inheritance:
// 1. Single inheritance
// 2. Multiple inheritance
// 3. Multi level inheritance
// 4. Hybrid inheritance
// 5. Hierarchical inheritance

// Single inheritance :
// In single inheritance the properties of parent class is derived in base or child class
// syntax: class base public : class A


#include<iostream>
using namespace std;
class A{
public:
    void myFun() {
        cout<<"Yeah";
        cout<<"\n";
    cout<<"Its a Single Inheritance";
    }
};
class B  : public  A{

};

int main() {
B obj;
obj.myFun();

return 0;
}



// Inheritance sample program
#include<iostream>
using namespace std;
class A{
public:
    float sal = 60000;
};
class B : public A{
public:
    float bonus = 500;
};
int main() {
B obj1;
cout<<obj1.sal;
cout<<"\n";
cout<<obj1.bonus;

return 0;
}
