//        *
//      * *
//    * * *

#include<iostream>
using namespace std;

void SpacetriangleP(int n){
    for(int i=1 ; i<=n ; i++) {
        for(int k =n-i ; k>0 ; k--) {
                cout<<" ";
        }
            for(int j=1 ; j<=i ; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
int main(){
    int num;
    cout<<"Enter the size of rows to print pattrer";
    cin>>num;
    SpacetriangleP(num);
    cout<<"n";
return 0;
}
