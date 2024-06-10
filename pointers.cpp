// we know that the we can get the address of variable using & operator
// Pointers are the variable that stores the address of other variables.
// using pointer we can access the variable and also we can modify it.

// using *ptr we can access the variable. & it gives the address . we can accees tha variable and can change its value
// using * we can access the value
#include<iostream>
using namespace std;
int main() {
 int a = 10;
 int *aptr = &a;

 cout<<"This * will print the value of pointer: " <<*aptr<<endl;
 cout<<"This & will print the address of variable :"<<&a;
 cout<<"\n";
 *aptr = 20;  // using *aptr we access the value and we can modify it.
 cout<<a;
 cout<<"\n";cout<<"\n";

 // There are multiple types of pointer
 // 1. arithematic pointer : It only have ++ , -- , + , -
 cout<<"*****Pointer Arithmatic*****";
 cout<<"\n";
 int b = 20;
 int *bptr = &b;
 cout<<bptr; cout<<"\n";
 cout<<*bptr;  cout<<"\n";
 bptr++;
 cout<<bptr;
 return 0;
}
