// vector class that creates a dynamic array allowing insertion and deletion at the back
// iterator are pointer like entities used to access the individual elements in a container
//iterator moves from one element to other this process is called iterator through container
// iterator mainly contain two functions
        //1. begin(): The member function begin return to the first element of the vector.
        //2. end() : The member function end return to the last element of the vector.

// there are many ways to use iterator
// 1. using begin() and end() iterators
// 2. using range based.
// 3. using const_iterator
// 4. using reverseiterator
// 5. using auto keyword.
// and now we are gonna to use auto keyword for the iterator.
// iterator are used to access the individual elements in a container.

// for(auto it = vector_name.begin() ; it != vector.end() ;it++) { std::cout << *it << " ";
// for loop auto keyword we have to create the object of iterator ie it
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> vector1;
    vector1.emplace_back(10);
    vector1.emplace_back(20);
    vector1.emplace_back(30);
    vector1.emplace_back(40);
    vector1.emplace_back(50);
    vector1.push_back(60);
    vector1.push_back(70);


    for (auto it = vector1.begin(); it != vector1.end(); it++){

            // if we want to print it in reverse the simply make use of rbegin and rend so it would print from back
        std::cout<< *it << " ";
        // Delete the element from the vector
        // vector name . erase function ( vector_name . begin() + 1);
         // vector1.erase(vector1.begin() + 2);
    }
return 0;
}
