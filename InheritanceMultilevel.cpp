// In multi level the properties of A class is derived in b and properties of b class derived in c
// Class A
//    |
// Class B
//    |
// Class C

#include<iostream>
using namespace std;
class A{
public:
    void myFunA() {
        cout<<"Multi-Level Inheritance Function A";
    }
};
class B : public A{
public:
    void myFunB() {
        cout<<"Multi-Level Inheritance Function B";
    }
};
class C : public B{
public:

};
int main() {
C obj1;
obj1.myFunA();
cout<<"\n";
obj1.myFunB();

return 0;
}

// m multi level inheritance properties of 1st class is derived in another class and peoperties of 2nd class is derived in another class and so n
// multiple inheritance the properties of All class are derived into single class
