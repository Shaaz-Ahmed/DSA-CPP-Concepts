// WAP for swap two numbers

#include<iostream>
using namespace std;
int main() {
    int a , b;
    cout<<"Enter two numbers for swapping ";
    cin>>a>>b;

    int temp;

    temp =a;
    a=b;
    b=temp;

    cout<<"After swapping the value is : " <<a <<" " <<b;
return 0;
}
