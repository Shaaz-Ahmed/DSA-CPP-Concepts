#include<iostream>
using namespace std;
int main() {
//variable are used to store the vale.
//datatypes variable name and values;
//All variable name should be start with letter alphabter or underscore we canst use number as a starting.
//after the fist letter alphabet it can contain number or anything

int a = 10;

cout<<"The value of variable is :"<<a;
cout<<"\n";

//Data types : which tell that what types of data can be store in variable.
//There are multiple types of data types and its size
//int : t it is used to store the whole number without decimal . It size if 4 bytes
//float: It is used to store the decimal number value. It size is 4 bytes
//char: Is used to store single character. Its size is 1 bytes.
//Boolean: is used to store the true or false value.
//Double: It is used to store the large integer . Its size is 8 bytes.
//String : It is used to store the sequence of character. Its size is
cout<<"Size checking of all data types";
cout<<"\n";
cout<<"size of int is :"<<sizeof(int);
cout<<"\n";
cout<<"size of Float is :"<<sizeof(float);
cout<<"\n";
cout<<"size of Char is :"<<sizeof(char);
cout<<"\n";
cout<<"size of Double is :"<<sizeof(double);
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"Sample programs for all data types";
cout<<"\n";
int b = 50;
cout<<"integer is:"<<b;
cout<<"\n";
float x = 50.0;
cout<<"Float is :"<<x;
cout<<"\n";

char c = 'A';
cout<<c;



return 0;
}
