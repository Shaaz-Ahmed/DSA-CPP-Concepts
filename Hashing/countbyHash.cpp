// count the number of repetation element in the array



#include<bits/stdc++.h>
using namespace std;
int main() {
    // Taking array input
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    // Pre-Compute
    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        // This is used when we are search the count of it
        cin>>number;

        // fetch
        cout<<hash[number]<<endl;
    }
return 0;
}
