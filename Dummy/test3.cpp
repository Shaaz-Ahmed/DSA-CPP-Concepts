#include <bits/stdc++.h> 

int getLongestSubarray(vector<int>& nums, int k){

    // Write your code here

    map<int,int>mp;

    int psum =0;

    int ans =0;

    for(int i =0;i<nums.size();i++)

    {

        psum = psum + nums[i];

        if(psum==k)

        ans = max(ans,i+1);

        if(mp.find(psum-k) != mp.end())

        ans = max(ans,i-mp[psum-k]);

        if(mp.find(psum)!=mp.end())

        {

            continue;

        }

        else

        mp[psum]=i;

    }

    return ans ;

}
