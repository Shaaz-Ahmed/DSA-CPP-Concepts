/**if else ladder is used to execute one condition from multiple statements
syntax: if(contion) {
 statement1
}
else if(condition 2) {
     code to be executed when the 2 condition is true
}
else if(condition 3) {
    code to be executed when the 3 condition is true
}
else (condition) {
    execute if all condition is false
}
**/




#include <iostream>

using namespace std;

int main() {
 int num;
    cout<<"Enter the number to check the grade";
    cin>>num;
    if(num < 0 || num > 100) {
        cout<<"You had Entered wrong grade";
    }
    else if(num >= 0 && num <= 50) {
        cout<<"You are fail";
    }
    else if(num >=50 && num < 60) {
        cout<<"You score D grade";
    }
    else if(num >=60 && num < 70) {
        cout<<"You score C Grade";
    }
    else if(num >=70 && num < 80) {
        cout<<"You score B Grade";
    }
    else if(num >=80 && num <90) {
        cout<<"You score A Grade";
    }
    else if(num >=90 && num < 100) {
        cout<<"You score A+ grade";
    }
    else{
        cout<<"Enter something";
    }

   return 0;
}
