//********Variable**********
//variable is used to store the value
//Syntax: datatypes variable_list
//E.g: int a;
//A variable can have alphabets, digits and underscore. A variable name can start with alphabet and underscore only. It can't start with digit.
//No white space is allowed within variable name. variable name must not be any reserved word or keyword e.g. char, float etc.
//Variable name can be anything
#include <iostream>
using namespace std;

int main() {
 int x=10;
 cout<<x;
 return 0;
}

//---------------------------------------------------------------------------------------------------------------------------

//*****************Another simple program for variable************
#include<iostream>
using namespace std;
int main() {
    int a = 10;
    cout<<a;
}

//------------------------------------------------------------------------------------------------------------------------

//******HACCKER RANK PROBLEM BASED ON DATA TYPES*************
       // Some C++ data types, their format specifiers, and their most common bit widths are as follows:

      //  Int ("%d"): 32 Bit integer
       // Long ("%ld"): 64 bit integer
       // Char ("%c"): Character type
       // Float ("%f"): 32 bit real value
       // Double ("%lf"): 64 bit real value

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
long b;
char c;
float d;
double e;
cin>>a>>b>>c>>d>>e;

cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
    return 0;
}
