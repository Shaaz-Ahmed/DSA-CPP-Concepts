// WAP to check the year is leap or not
#include<iostream>
using namespace std;
int main() {
    int year;
    cout<<"Enter th Year : ";
    cin>>year;

    if(year%4==0){
        cout<<year <<" is a leap Year";
    }
    else {
        cout<<year << " is not leap year";
    }
return 0;
}
