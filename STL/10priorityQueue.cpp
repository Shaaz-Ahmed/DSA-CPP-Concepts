// Priority queue : Priority queue means the element with largest values will be print at the top or first and so on.
#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue <int> pq1;
    pq1.push(20);
    pq1.push(18);
    pq1.push(35);
    pq1.push(22);
    pq1.push(10);
    pq1.push(26);

        // In priortiy queue we have to make use of top not front
      while (!pq1.empty()) {
        std::cout << pq1.top() << " ";
        pq1.pop();
    }
return 0;
}
