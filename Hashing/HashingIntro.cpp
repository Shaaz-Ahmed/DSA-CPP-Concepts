// hashing is a technique used to map the data like string numbers to fixed value called hash code
// Hashing is useful for quickly finding , inserting and deleting item in a collection like hash table or unordered map

// Hashing means pre- storing the vales and fetching when required

// ***** HASH FUNCTIONS ******
// Convert an input into fixed size hash code typically an integer
// a simple hash function for string could sum of ascii value of character and them take the remainder when divide by table size



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
