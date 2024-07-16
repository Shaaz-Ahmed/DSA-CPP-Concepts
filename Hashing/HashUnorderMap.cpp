// ****** UNORDERED MAP*******

// In map the time complexity is too high that is Log N
// The unorder map is same like map but it stores the element in unsorted order its not maintaining any order

// Advantage : The time complexity of unordered map in best case and average is O(1) but the TC in worst case if O(n) it occurs once in blue
// very minor the TC is O(n) most of the time its going to be O(1)
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
    unordered_map<int,int > mpp;
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

