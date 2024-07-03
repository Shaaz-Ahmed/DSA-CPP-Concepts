// * * * *
// * * *
// * *
// *
#include<iostream>
using namespace std;
void ReverseT(int n){
    for(int i = n ; i> 0 ; i--){
        for(int j = i ; j > 0 ; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main() {
    int num;
    cout<<"Enter the size of rows to print reverse triange : ";
    cin>>num;
    ReverseT(num);
    cout<<"\n";

return 0;
}
