// second largest element in the array
#include <bits/stdc++.h>



bool opt(int &a, int &b){

    return a > b;

}



int findSecondLargest(int n, vector<int> &arr)

{

    sort(arr.begin(), arr.end(), opt);

    for(int i = 0; i < n-1; i++){

        if(arr[i] > arr[i+1]){

            return arr[i+1];

        }

    }

    return -1;

}
