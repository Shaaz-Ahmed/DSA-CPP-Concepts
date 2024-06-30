// Deque : It is double ended queue the insertion and deletion takes place at back and front both .
#include<bits/stdc++.h>
using namespace std;
int main() {
    deque<int> dq1;
    dq1.push_back(10);
    dq1.push_back(20);
    // methods in it to add and delete the element
    dq1.emplace_front(30); // to add the element at the beginning we have to use emplace_front
    // to add element at the end we can use emplace_back
    dq1.emplace_back(40);
    dq1.pop_front();    // this pop_front is used to delete the first element from the deque

    dq1.pop_back();

    for(auto it = dq1.begin(); it!= dq1.end(); ++it){
        std::cout<<*it<< " ";
    }
return 0;
}
