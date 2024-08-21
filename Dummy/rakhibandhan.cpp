#include <bits/stdc++.h> 

int rakshaBandhan(vector < int > arr, int n) {

    // Write your code here.

    long long count = 0;

    long long sum = 0;

    sort(arr.begin(), arr.end());

 

    for(int i = n-1; i >= 0; i--){

 

        if(sum >= 0){

 

            sum += arr[i];

            if(sum > 0){

                count++;

            }

        }

    }

    return count;

}