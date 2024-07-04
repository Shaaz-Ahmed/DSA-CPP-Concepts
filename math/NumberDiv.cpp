// WAP to check wheather the number is divisible by given number or not
#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the Number : " ;
    cin>>num;
    if((num % 5 ==0) && (num % 11 ==0)){
        cout<<num<<" is divided by 5 and 11 both";
    }
    else {
        cout<<num<<" is not divisible by both 5 and 11";
    }
return 0;
}
