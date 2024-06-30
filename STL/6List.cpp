// List is also a container its like same as vector it allow us to store the element in it .
// list is dynamic in nature . same way of declaration
// both the list and vector are used to store the data element . they both are some but they have some difference in their,
// characters , performance which make them suitable for different use case.
// **** STRUCTURE*****
//List:  implemented as a doubly linked list , each element contain a pointer to next node, in list it does not have contigios memory allocation.
// vector : implemented as dynamic array . store elements as contiguous block of memory . allow direct access to element as a index

// ***** PERFORMANCE*****
// List : list have fast insertion and deletion with complexity of 0 (1) because it only require pointer manipulation.
// vector : vector it required an expensive insertion and deletion it having O(n) because it may required shifting element


#include<bits/stdc++.h>
using namespace std;
int main() {
    list <int> list1;
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);

    for(auto it = list1.begin(); it!= list1.end(); ++it){
        std::cout<< *it<<" ";
    }
return 0;
}


