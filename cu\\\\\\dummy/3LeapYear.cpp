/**
Write a program to find the check the leap year or not
**/
#include <iostream>
using namespace std;

int main() {
 int year;
    cout<<"Enter the year to check ";
    cin>>year;
        if(year % 4 == 0) {
            cout<<"This is leap year";
        }
        else{
            cout<<"THis is not a leap year";
        }
      return 0;
}
