#include<iostream>
using namespace std;

void FullTriangle(int n){
    for(int i=1; i<=n; i++){
        for(int k=n-i; k>0 ;k--){
                cout<<" ";
        }
            for(int j=1; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }

int main() {
    int num;
    cout<<"Enter the size of row : ";
    cin>>num;

    FullTriangle(num);
    cout<<"\n";

return 0;
}
