// follow book for better understanding

29 Views
0 Replies
Published on 17 May, 2024
#include <bits/stdc++.h>

/*



    intervals[i][0] = start point of i'th interval

    intervals[i][1] = finish point of i'th interval



*/



vector<vector<int>> mergeIntervals(vector<vector<int>> intervals)

{

    // Write your code here

    int n= intervals.size();

    sort(intervals.begin(),intervals.end());



    vector<vector<int>> ans;



    for(int i=0;i<n;i++){

        int start=intervals[i][0];

        int end=intervals[i][1];



        if(!ans.empty() && end<= ans.back()[1]){

            continue;

        }



        for(int j=i+1;j<n;j++){

            if(intervals[j][0]<=end){

                end=max(end, intervals[j][1]);

            }else{

                break;

            }

        }

        ans.push_back({start,end});

    }

    return ans;



}
