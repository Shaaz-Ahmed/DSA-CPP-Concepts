#include<bits/stdc++.h>
using namespace std;
int main() {
    // push_back is used to insert the element into the vector
    // pop_back is used to delete the element from the vector
    vector <int> vector1;
    vector1.push_back(10);
    vector1.push_back(20);
    vector1.push_back(30);
    vector1.push_back(40);
    vector1.push_back(50);
    vector1.emplace_back(60);

    vector1.pop_back();

         for (auto it = vector1.begin(); it != vector1.end(); it++){

        std::cout<< *it << " ";
    }
    return 0;
}
