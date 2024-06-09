// A function is piece of code that is used to perform a specific task
// It only runs when it is called
//Syntax :
// void myFunction() {.....}
// void mean the functions does not have any return type | myFunction : It is a name of a function
// To use function we have to call the function and write the function name followed by bracket and semi colon

#include<iostream>
using namespace std;
void function1();
void myFun() {  // function declaration
cout<<"Hello world";     //function declaration
}

void function1() {
cout<<"Hello this is function 1";
}

// we can declare the function inside the main and we can use or access outside of main function
int main() {
myFun();
cout<<"\n";
myFun();
cout<<"\n";
function1();
return 0;
}

// first the programs runs with main function we have to declare the function and we have to define the function we can define the anywhere in the program

