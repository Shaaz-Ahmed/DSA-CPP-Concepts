// Any number which is divisible by 7
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter any number :";
    cin>>n;
    if(n%7 ==0 || n%10==0)
        cout<<"Number is buzz";
    else
        cout<<"Number is not Buzz";
return 0;
}
