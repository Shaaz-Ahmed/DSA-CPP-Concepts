/**
Switch statements executes one statements for multiple condition . It is like if else ladder
Syntax:
    switch(expression) {
    case value1:
    break;

    case value2:
    break;

    case value3:
    case value3:
    break;

    default:
    code will excute if all condition is wrong
    break;
    }
**/
// Program to build a simple calculator using switch Statement

#include <iostream>

using namespace std;

int main() {
  int num;
    cout<<"Enter the number to check grade";
    cin>>num;
      switch(num) {
   case 1:
    cout<<"It is one";
    break;

   case 2:
    cout<<"It is two";
    break;

   default:
    cout<<"it is not 2 or 1 ";
    break;
      }
      return 0;
}


  //***********Program***********


/**#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}
**/
