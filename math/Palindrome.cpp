// Palindrome means the original and the reverse text both are same
// 121 = 121  2002 = 2002 if you will look from both side it will look same

#include<iostream>
using namespace std;
class A{
    int n ,c ,r , s=0 ;
public:
    void input(){
    cout<<"Enter any number";
    cin>>n;
    }
    void output() {
        c = n;
        s = 0;
        while(n>0){
            r = n % 10;
            s = (s*10)+r;
            n = n/10;
        }
        if(c==s){
            cout<<"Palindrome Number :";
        }
        else{
            cout<<"Not Palindrome Number";
        }
    }
};
int main() {
    A obj;
    obj.input();
    obj.output();
return 0;
}
