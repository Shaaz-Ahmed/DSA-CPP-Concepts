//Operator works on variables
#include<iostream>
using namespace std;
int main() {
//operator are used to perform an operation on a variable
//*****ARITHEMATIC OPERATOR*****
//Arithematic operator are used to perform a basic mathematical operation
//Arihematic operator are:
// 1. Addition() + : It is used to add the numbers.
// 2. Substraction() - : It is used to substract the number.
// 3. Multiplication() * : It is used to multiply the numbers
// 4. Division () / : It is used to diviide the numbers.
// 5 Modulus () % : It used to find the percentage.
// 6. Increment() ++ : Increase the values by one.
// 7. Decrement() -- : It is used to decrease the value by one.

//Arithematic operator:
cout<<"*****ARITHEMATIC OPERATOR*****";
cout<<"\n";
cout<<"\n";
int x = 10 , y = 20;
cout<< "Addition is : "<<x + y <<" It add two numbers";
cout<<"\n";
cout<<"Subtraction is :"<< x - y <<" It Subtract two numbers";
cout<<"\n";
cout<<"Division is : "<<x/y<<" It Divide the given numbers";
cout<<"\n";

int f = 5 ,  e = 2;
cout<<"Modulus is :"<<f%e;
cout<<"\n";
int z = 15;
++z;
cout<<"Increment of 15 is :"<<z << " Basically it increment value by 1";

cout<<"\n";
 int a = 44;
 --a;
 cout<<"Decrement if 44 is:"<<a<< "basically it decrement the value by 1";

 cout<<"\n";
 cout<<"\n";
 cout<<"\n";

 // Assignment operator are used to assign the value to variable.
 // 1. = It assign the values for variables.
 // 2. += (x = x + 3) addition and equal to
 cout<<"*****ASSIGNMENET OPERATOR*****";
 int ass1 = 10;
 ass1 += 3;
 cout<<ass1;
 cout<<"\n";
 int ass3 = 50;
 ass3 -= 5;
 cout<<ass3;

cout<<"\n";
 ass3 *= 5;
 cout<<ass3;

cout<<"\n";cout<<"\n";cout<<"\n";
// There are more assignment operator like += -= *= /= %= etc same it will work with others

 //Comparision operator
 // This comparision operator are used to compare two values or variables
 // 1. equal to ==
 // 2. not equal to !=
 // 3. Greater than >
 // 4. Less than <
 // 5. Greater than euqal to >=
 // 6. Less than equal to <=

cout<<"*****COMPARISION OPERATOR******";
cout<<"\n";
 int comp1 = 10 , comp2 = 11;cout<<"\n";
 cout<<"Equal to operator : "<<(comp1 == comp2);cout<<"\n";
 cout<<"Greater than operator : "<<(comp1 > comp2); cout<<"\n";
 cout<<"Not equal to operator: "<< (comp1 != comp2);cout<<"\n";
 cout<<"Less than operator : " << (comp1 < comp2); cout<<"\n";
 cout<<"Less than equal to : " << (comp1 <= comp2); cout<<"\n";
 cout<<"Greater than equal to : "<< (comp1 >= comp2); cout<<"\n";
return 0;
}
