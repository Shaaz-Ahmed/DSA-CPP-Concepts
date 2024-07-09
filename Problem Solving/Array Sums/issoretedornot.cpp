#include <bits/stdc++.h>
bool sortArr(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1; i<n ; i++){
        if(arr[i] >= arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}

// check the array is sorted or not
