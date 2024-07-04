#include<iostream>
using namespace std;
int main() {
    int n,r,s;
    cout<<"Enter any Number : ";
    cin>>n;

    while(n>0){
        r = n %10;
        s = s+r;
        n = n/10;
    }
    cout<<s;
return 0;
}
