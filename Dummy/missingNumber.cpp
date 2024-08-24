// find the missing number in array

#include <bits/stdc++.h>
vector<int> missingNumbers(vector<int> &arr, int n) {
    // Write your code here.
    for(int i=0; i<=n; i++){
        for(intj=0; j<=n-1; j++){
            flag =0;
            if(arr[j]==arr[i]){
                flag =1;
                break;
            }
            if(flag == 0){
                return i;
            }
        }
    }
}
