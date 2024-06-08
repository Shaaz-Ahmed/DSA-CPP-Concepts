// A logical operation is used to connect two or more expression
//Logical operator are used to determine the logic between variable and values
//1. Logical AND && : returns true if both the value are tr
//2. Logical OR || : return true if one value will be true
//3. Logical NOT != : reverse the result
#include<iostream>
using namespace std;
int main() {
int x = 10 ;
int y = 13;

cout<<"This is for AND operrator : "<<(x>10 && x <9);

cout<<"\n";

cout<<"This is for OR operator : " <<(x<11 || x >12);
cout<<"\n";
cout<<"This is NOT operator: "<<(!(x>10 && x <9));
return 0;
}
