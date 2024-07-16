// Integer hashing can be done using array.
// Character hashing can be also done using array.

// if we do character -minus a then we will get the corresponding element in the hash array.
// ASCII: a-> 97 z->122.

// the integer hashing can lead a problem like if we use more than 10^6 it will throw error
// whereas if we use character hashing we will not face any problem because we are having only 256 chracter
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;

    // pre-computation
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        // fetch
        cout<<hash[c-'a'] <<endl;
    }
return 0;
}
