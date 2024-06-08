//Switch are subsititute of long if else statement
//Switch case compare the variable against multiple values and it execute the code where it matches
//The name of variable and switch condition should be same
#include<iostream>
using namespace std;
int main () {
char button;
cout<<"Enput the character\n";
cin>>button;
switch(button) {

case 'a':
    cout<<"You entered A";
    break;
case 'b':
    cout<<"You entered B";
    break;
case 'c':
    cout<<"You entered C";
    break;
default:
    cout<<"Enter valid alphate A , B , C";
    break;
}
return 0;
}
