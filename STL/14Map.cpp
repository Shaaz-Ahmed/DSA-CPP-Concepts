// Map container :
// Map is used to store the key value pair data types
// it basically create the mapping
// In map the element are stored in sorted order like the set this map also having mutlimap and unordermap this will be same like sets
// There are two ways to add the elements inside the map that is check line no :

#include<bits/stdc++.h>
using namespace std;
int main(){

    map<int,string> m;
    m[1] = "Shaaz";
    m[2] = "Shams";

    for(auto it = m.begin() ; it!= m.end() ; ++it){
        cout<<(*it).first << " " << (*it).second <<"\n";
    }
return 0;
}
// to accessing the value of map we have to make use of a pairs like mapname.first

