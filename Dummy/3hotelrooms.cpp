#include <bits/stdc++.h>



string maxRoomBooked(vector<string> arr, int n) {



     unordered_map<string,char> map;

     for(auto x: arr)

     map[x]++;



     vector<pair<int,string>> lol;

     for(auto x: map)

     {

         lol.push_back({x.second,x.first});

     }

     sort(lol.rbegin(), lol.rend());



     int equal=lol[0].first;

     string ans=lol[0].second;

     for(int i=0; i<lol.size(); i++)

     {

       if(lol[i].first==equal && lol[i].second<ans)

       {

         ans=lol[i].second;

       }

     }



     return ans.substr(1);

}
