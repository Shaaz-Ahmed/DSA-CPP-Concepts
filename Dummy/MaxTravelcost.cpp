#include<bits/stdc++.h>

typedef pair<int,int> p;

typedef pair<int,p> P;

vector<vector<int>> findMST(vector<vector<int>> &road, int n, int m)
{
    vector<bool>vis(n+1,false);
    vector<vector<int>>ans;

    // Construct the adjacency list form
    vector<p>adj[n+1];
    for(auto it:road) {
        adj[it[0]].push_back({it[1],it[2]});
        adj[it[1]].push_back({it[0],it[2]});
    }

    priority_queue<P,vector<P>,greater<P>>q;
    // node = {cost,{source,destination}}
    q.push({0,{-1,1}});
    
    while(!q.empty()) {
        auto node=q.top();
        q.pop();
        int cost = node.first;
        int source = node.second.first;
        int destination = node.second.second;
        if(vis[destination]) {
            continue;
        }
        vis[destination]=true;
        if(source!=-1) {
            ans.push_back({source,destination,cost});
        }
        for(auto it:adj[destination]) {
            if(!vis[it.first]) {
                q.push({it.second,{destination,it.first}});
            }
        }
    }
    return ans;
}
