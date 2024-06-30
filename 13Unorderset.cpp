// Unordered set : unordered set is also like a set
// unorder set have two condition that it stores the element in it without any order.
// it should contain unique elements

#include<bits/stdc++.h>
using namespace std;
int main() {

    unordered_set<int> uns;
    uns.emplace(10);
      uns.emplace(10);
      uns.emplace(20);
        uns.emplace(22);
          uns.emplace(15);

    for(auto it = uns.begin(); it!= uns.end() ; ++it) {
        cout<<*it<< "\n";
    }
return 0;
}
