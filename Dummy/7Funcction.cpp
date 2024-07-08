#include <iostream>

using namespace std;
  void add() {
    int a , b , sum ;
    cout<<"Enter first number";
    cin>>a;

    cout<<"Enter Second number";
    cin>>b;

    sum = a + b ;
    cout<<sum;

  }
  void fact0() {
   int num,i,fact;
    cout<<"Enter the number";
    cin>>num;
    for(i=1 ; i < num ; i++) {
        fact = fact*i;
    }
    cout<<fact;
  }


int main() {
    add();
    fact0();
    return 0;
}
