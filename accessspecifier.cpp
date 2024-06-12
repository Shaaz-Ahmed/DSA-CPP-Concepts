// access specifier as we were familiar with public. Access specifier define how the member function and attribute are accessible.
// There are three types of access specifier.
// 1. Public: In this we can access the attributes or methods through entire program
// 2. Private : but in private we cannot access the member function outside of the class
// 3. Protected : Member function cannot be access from outside of the class it can be access in inherited class.

#include<iostream>
using namespace std;
class myClass{
public:
    string  name;

private:
    int age = 20;
};
int main() {
myClass obj1;
obj1.name = "Shaaz";

cout<<"Name is : " <<obj1.name;
// cout<<"Age is : "<<obj1.age;

return 0;
}
