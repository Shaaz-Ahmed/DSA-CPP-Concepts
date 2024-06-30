// Multiset : The sets and mulisets both are same
// set having two conditions but multiset only have single condition that it will store the element in sorted order
// but not uniquely

#include<bits/stdc++.h>
using namespace std;
int main() {

    multiset<int> ms1;
    ms1.emplace(20);
    ms1.emplace(20);
    ms1.emplace(18);
    ms1.emplace(12);
    ms1.emplace(22);

        for (auto it = ms1.begin() ; it!= ms1.end(); ++it){
            cout<<*it << "\n";
        }
return 0;
}
