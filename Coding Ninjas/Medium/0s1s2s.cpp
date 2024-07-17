// Problem Statement
Problem statement
You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

Note :
Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 10
1 <= N <= (5 * (10 ^ 5))
0 <= ARR[i] <= 2

Where 'N' is the size of the given array/list.
And, ARR[i] denotes the i-th element in the array/list.

Time Limit: 1sec
Sample Input 1 :
2
6
0 1 2 2 1 0
7
0 1 2 1 2 1 2
Sample Output 1 :
0 0 1 1 2 2
0 1 1 1 2 2 2
Sample Input 2 :
2
7
2 2 2 1 1 1 0
6
2 1 2 0 1 0
Sample Output 2 :
0 1 1 1 2 2 2
0 0 1 1 2 2

// Solution
#include <bits/stdc++.h>

void sort012(int *arr, int n)

{

   int cnt0 = 0, cnt1 = 0, cnt2 = 0;



   for(int i=0; i<n; i++){

      if(arr[i] == 0) cnt0++;

      else if(arr[i] == 1) cnt1++;

      else cnt2++;

   }



   for(int i=0; i<cnt0; i++) arr[i] = 0;

   for(int i= cnt0; i<cnt0 + cnt1; i++) arr[i] = 1;

   for(int i= cnt0 + cnt1; i<n; i++) arr[i] = 2;

}

