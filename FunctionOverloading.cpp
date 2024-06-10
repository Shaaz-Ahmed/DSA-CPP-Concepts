//Function overloading is nothing but the function with same name but with different parameters.
#include<iostream>
using namespace std;

int plusFun(int x , int y){
 return x + y ;
}
double plusFun(double x , double y){
 return x + y;
 }
 int main() {
  int num1 = plusFun(10,20);
  double num2 = plusFun(10,20);
  cout<<num1;
  cout<<"\n";
  cout<<num2;
 }
