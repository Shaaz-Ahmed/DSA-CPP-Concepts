// follow from book

#include <bits/stdc++.h>
long long getInversions(long long *arr, int n){
    // Write your code here.
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[i]>arr[j] && i<j)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
