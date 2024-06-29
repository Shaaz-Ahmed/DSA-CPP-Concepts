// vector does store the element of similar fashion as a array does.
// vector is used to store the values as array does , but the array is constant in nature like we cant add element to it whereas the vector is dynamic in nature we can add element to it
// vector is same as like array we can store similar types of elements to it , but we can change the size of vector during execution of a program as per requirements.
// syntax: vector <data_type> vector_name;
// we can add the element to the vector using two ways.
        //1. vector_name . (dot) push_back();    vector_name dot push_back(value);
        //2. vector_name . emplace_back()
        // emplace_back is more faster than the push_back
// we can add the element using push_back or we can add directly during declaration i.e vector = {10,20,30,40,50}
#include<bits/stdc++.h>
using namespace std;
int main() {
         // declaration of vector
     vector <int> vector1;
     vector1.push_back(10);
     vector1.push_back(20);
     vector1.push_back(30);
     vector1.push_back(40);
     vector1.push_back(50);
     vector1.emplace_back(60);

      // accessing the vectors.
     for (auto it = vector1.begin(); it != vector1.end(); ++it) {
        std::cout << *it << " ";
    }

return 0;
}

// the iterator directly point to the memory not to the element.
