// *
// * *
// * * *
#include<iostream>
using namespace std;
 void trianglePattern(int n){
 for(int i=1 ; i<=n ;i++){
    for(int j=1;j<=i; j++){
        cout<<"*";
    }
    cout<<endl;
 }

 }
 int main() {

 int num;
 cout<<"Enter the size of rows to print pattern: ";
 cin>>num;

 trianglePattern(num);
    cout << "\n";

return 0;
 }
