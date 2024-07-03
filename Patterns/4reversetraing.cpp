// * * * *
//   * * *
//     * *
//       *

#include<iostream>
using namespace std;

void ReverseT(int n){
    for(int i=n ; i>=1; i--){
        for(int k=n-i; k>0;k--){
            cout<<" ";
        }
        for(int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main() {
int num;
cout<<"Enter the number of rows : ";
cin>>num;
ReverseT(num);
cout<<"\n";

return 0;

}
