// This program is for class with multiple objects.
// For using multiple object we have to create the multiple object ( obj1 , obj2)
#include<iostream>
#include<string>
using namespace std;

class College{
public:
    string name;
    int age;
    string div;

};
int main() {

    College obj1;
    obj1.name = "Shaaz";
    obj1.age = 20;
    obj1.div = "Class A";

    cout<<"This all is for object first";
    cout<<"\n";
    cout<<"Name is :"<< obj1.name;
    cout<<"\n";
    cout<<"Age is :"<< obj1.age;
    cout<<"\n";
    cout<<"Division is :" << obj1.div;
    cout<<"\n";cout<<"\n";cout<<"\n";

     cout<<"This all is for object Second";cout<<"\n";
     cout<<"\n";
     College obj2;
     obj2.name = "Nashra";
     cout<<"Name is : " << obj2.name;
     obj2.age = 25;
     obj2.div = "B";
    cout<<"\n";
     cout<<"Age is :" << obj2.age;
     cout<<"\n";
     cout<<"Division is : " <<obj2.div;
     cout<<"\n";

    return 0;
}
