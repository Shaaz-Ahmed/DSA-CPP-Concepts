// ****** Maximum hash array size ******.

// Maximum array size should be 10 rase to 6 it can only go till 10^6 it will throw erorr if we declare more than 10^6
// If we declare it globally it will go till 10^7.

// bool it will be 10^7 and if we declare globally it will go till 10^8.


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
    // int hash[1000000] = {0}; so this is the max hash array size if we put more than 10^6 it will generate error
        int hash[100000] = {0};  // This will work fine because it's having max size 10^6.
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



