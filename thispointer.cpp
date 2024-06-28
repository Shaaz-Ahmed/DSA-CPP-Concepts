#include<iostream>
using namespace std;
class A{
 int a , b ;
 public:
     A(int a , int b) {
        this->a=a ; this-> b = b;
     }
     void showfun() {
        cout<<a << b;
     }
};
int main() {
    A obj(10,20);
    obj.showfun();

return 0;
}

// this pointer is used when the instance variable and local variable are same
// we make use of this keyword to point the instance variable.
// this keyword is used with this fucntion.
