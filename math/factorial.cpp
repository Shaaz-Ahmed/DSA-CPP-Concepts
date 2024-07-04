// Factorial :
// 5! = 5*4*3*2*1 =120;

#include<iostream>
using namespace std;
int main() {
    int n,f=1;
    cout<<"Enter any number: ";
    cin>>n;

    for(int i=1; i<=n ; i++){
        f = f*i;     // initially f = 1 and i is also 1 // then i will be 2 and
    }
    cout<<"Factorial is :" <<f;
return 0;
}
