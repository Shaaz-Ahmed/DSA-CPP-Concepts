// Dont follow this code this is just for submission purpose follow code from book

// This code is right but dont know the logic
#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n) {
   int hash[n + 1] = {0};
   int sum = n * (n + 1) / 2;
   pair<int, int> p;
   int num = 0;
   int x = 0;
   for (int i = 0; i < n; i++) {
       if (hash[arr[i]] == 1) {
           num = arr[i];
       }
       x += arr[i];
       hash[arr[i]] = 1;
   }
   int y = x - num;
   p.first = sum - y;
   p.second = num;
   return p;
}


