// Pair : It is a container that is used to store the two values into single element.
// The values may or may not be of same data types.
// The pair store the element values as {first, second} the order of value is fixed the value can access by dot operator followed by keyword
// The first value can access using the first keyword whereas the second value can access using second keyword.

// symtax: pair <data_type1, data_type2> name (initialize values);

#include<bits/stdc++.h>
using namespace std;
int main() {
    pair<string , int> pair1;
    pair1.first = "Shaaz";
    pair1.second = 20;

    cout<<"Name is : " <<pair1.first;
    cout<< "\n";
    cout<<"Age is : " <<pair1.second;
    cout<<"\n";

    pair<int , int> pair2;
    pair2.first = 10;
    pair2.second = 20;

    cout<<pair2.first<<" ";
    cout<<pair2.second;

return 0;
}
