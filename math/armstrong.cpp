// Armstrong Number: for eg 153 : addition of all digits of cube
// 1*1*1 = 1 5*5*5 = 125 3*3*3=9   = 152 so this is called armstrong number
#include<iostream>
using namespace std;
class A{
    int n,c, r , arm=0;
public:
    void setdata() {
        cout<<"Enter any number : ";
        cin>>n;
    }
    void getdata() {
    c =n;
    arm =0;
        while(n>0){
            r = n%10;
            arm = (r*r*r)+arm;
            n = n/10;
        }
        if(c==arm)
            cout<<"Armstrong Number";
        else
            cout<<"Not armstrong Number";

    }
};
int main() {
    A obj;
    obj.setdata();
    obj.getdata();
return 0;
}
