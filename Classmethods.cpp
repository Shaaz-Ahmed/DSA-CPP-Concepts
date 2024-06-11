// Methods are function. there are two ways to access the methods 1. Inside the class 2. Outside the class
// If we want to access inside the class we can access easily using (.) operator like  but if we want to acees outisde of class we can access using scopre resolution operator

// We can access the methods of class in two ways 1. Inside the class 2. Outside the class using :: operator
// we just want to create the object of class and using that object we can access any method of the class
// we just want to create the object of class and using that object we can access any method of the class
#include<iostream>
using namespace std;
class myClass{
 public:
     void myFun() {  // This we did inside the function
      cout<<"*****Class Methods*****";
      cout<<"\n";
      cout<<"Hello world this is a function inside class";
     }
     void myFunOutside() ;
};
// we will access this function which we had declared inside the class we can access using scope resolution operator.
// Class_name :: function_name()
void myClass :: myFunOutside() {
    cout<<"This is class methods which we declared inside the class and access outside of class";
}
int main() {
    myClass myobj;
    myobj.myFun();
    cout<<"\n";
    myobj.myFunOutside();
return 0;
}


