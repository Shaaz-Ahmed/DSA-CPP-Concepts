/**
 Write a program to check the entered alphabete is capital or small
**/
#include <iostream>
using namespace std;

int main() {
 int ch;
    cout<<"Enter the character to check whether is it small or caps";
    cin>>ch;
       if(ch > 'a' && ch < 'z') {
        cout<<"Entered charcter is small";
       }
       else{
        cout<<"Entered character is capital";
       }
    return 0;
}
