


#include <bits/stdc++.h>

using namespace std;

vector<int> nextGreaterElement(vector<int> &arr, int n) {

  vector<int> ans(n, -1);

  stack<int> s1;

  for (int i = n - 1; i >= 0; i--) {

    while (!s1.empty() && s1.top() <= arr[i])

      s1.pop();

    if (s1.empty())

      ans[i] = -1;

    else

      ans[i] = s1.top();

    s1.push(arr[i]);

  }

  return ans;

}








