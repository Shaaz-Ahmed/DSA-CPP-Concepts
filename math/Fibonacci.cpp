// WAP to check the number is fibonnaci or not
#include<iostream>
using namespace std;
class A{
    int n,a,b,c;
public:
    void fib() {
        a =0; b=1;
    cout<<"Enter the number of terms :";
    cin>>n;

    for(int i=0; i<=n; i++){
        cout<<a <<ends;
        c=a+b;
        a=b;
        b=c;
    }
    }
};
int main() {
    A obj;
    obj.fib();
return 0;
}
