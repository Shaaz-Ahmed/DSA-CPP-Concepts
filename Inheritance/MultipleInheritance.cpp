// In multiple inheritance where a class can inherit from multiple class.
// Multiple class can be derived in a single class is called multiple inheritance.
// class A      class B
//    \          /
//      Class C
// Syntax Class A { ..} Class B {..} class C : public A , public B{..}
#include<iostream>
using namespace std;
class A{
public:
 void myFunA(){
 cout<<"This is a class A in multiple inheritance";
 }
};
class B{
public:
    void myFunB() {
    cout<<"This is a class B in multiple inheritance";
    }
};
class C : public A, public B{
public:
};
int main() {
 C obj1;
 obj1.myFunA();
 cout<<"\n";
 obj1.myFunB();
return 0;
}
