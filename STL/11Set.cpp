// Set container: Two main condition
// Set store elements in sorted order
// Set store everything unique
// It maintain the tree inside it
#include<bits/stdc++.h>
using namespace std;
int main() {
     set <int> set1;
     set1.insert(20);
     set1.emplace(20);
     set1.emplace(30);
     set1.emplace(40);

        // printing the set elements
        for (auto it = set1.begin() ; it!= set1.end() ; ++it) {
            cout<<*it<< "\n";
        }
return 0;
}
