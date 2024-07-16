// we are facing the issue of the max size in integer hashing so we are having map and unordered map
// using this we can store the large amount of element into array.

// the concept of map and unordered would be same.
// Map is having key value pair.
// Number is the key and value is the frequency
// It gives the key value pair mpp[1]++  ans: (1->1)
// we have to do simply mpp[arr[i]]++;
// Map is beneficial because it takes little less memory. It will just store what we required
// Map store the value in sorted order
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // pre-compute
    map<int,int > mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetch
        cout<<mpp[number] <<endl;
    }
return 0;
}
