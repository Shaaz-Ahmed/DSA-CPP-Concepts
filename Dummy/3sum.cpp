#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>> ans;
	sort(arr.begin(), arr.end());
	for (int i=0;i<arr.size() - 2;i++) {
		if (i > 0 && arr[i] == arr[i-1]) {
			continue;
		}
		int left = (i + 1), right = (arr.size() - 1);
		while (left < right) {
			int sum = (arr[i] + arr[left] + arr[right]);
			if (sum == K) {
				ans.push_back({arr[i], arr[left], arr[right]});
				int x = left;
				while (left < right && arr[left] == arr[x]) {
					left++;
				}
				x = right;
				while (left < right && arr[right] == arr[x]) {
					right--;
				}
			}
			else if (sum < K) {
				left++;
			}
			else {
				right--;
			}
		}
	}
	return ans;
}
