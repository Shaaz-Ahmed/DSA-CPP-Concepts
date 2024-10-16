#include <iostream>
using namespace std;

int main() {
 int j , num ;
    cout<<"Enter the number";
    cin>>num;
     int fact = 1;
     for(j=1 ; j<=num ; j++) {
        fact = fact * j ;
     }
     cout<<fact<<"\n";
     return 0;
}
