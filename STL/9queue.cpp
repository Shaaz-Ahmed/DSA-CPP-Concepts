// queue is a linear data structure . queue follows first in first out (FIFO) it mean the element which come first can go out first
#include<bits/stdc++.h>
using namespace std;
int main () {
    queue<int> q1;
    q1.push(50);
    q1.push(40);
    q1.push(30);

    // For printing the element in queue we  have to check the empty while condition like same we did for stack
    while(!q1.empty()){
        cout<<q1.front() << "\n";
        q1.pop();

        // in stack we make use of stack_name.top bit in queue we make use of stack_name.front()
    }
return 0;
}
