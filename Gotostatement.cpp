//Goto statement is used to transfer the flow of a program
// Goto statement is like a jump statement
// You can create any goto its like a function goto_name: with colon
#include <iostream>
using namespace std;
int main() {
    youcan:
        cout<<"You can drive ";
   cout<<"Enter your age";
   int age;
   cin>>age;
     if(age>18) {
        goto youcan;
     }
     else{
        cout<<"You are not capable to drive";
     }
    return 0;
}
