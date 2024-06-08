//Conditional statement are used to make a comaprision and take decision
// if else condition is like a choices like this or that
//if :
// if-else:
// else if :
//if-else-ladder:

#include<iostream>
using namespace std;
int main() {
int savings;
// if means if the condition in if is true then execute but if the condition in if is false then execute else statement
// if there should be multiple choices then choose the if else if thats called ladder
cin>>savings;

if(savings>5000){
    if(savings>10000){
        cout<<"Date for Roadtrip";
    }
    else{
        cout<<"Shopping date";
    }
}
else if(savings>2000){
    cout<<"Date in local cafe";
}
else{
    cout<<"GO with friends";
}
//Nested if else condition: where we are putting if else condition inside if condition
//if else inside if condition is called nested if else
return 0;
}

