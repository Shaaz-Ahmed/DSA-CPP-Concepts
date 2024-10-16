/**
Write a program to check whether the number is positive negative or zero
**/
#include <iostream>

using namespace std;

int main() {
  int num;
  cout<<"Enter the number to check which number is that";
  cin>>num;
   if(num > 0) {
    cout<<"Number is positive";
   }
   else if(num < 0) {
    cout<<"Number is Negative";
   }
   else if(num = 0) {
    cout<<"Number is zero";
   }
   return 0;
}
