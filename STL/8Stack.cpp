// Stack is linear data structure. stack is a LIFO (last in first operation)
// In stack indexing access is not allowed
// In stack only we have three function
//1. Push : Used to insert or add the element
//2. Pop : Used to delete the element
//3. top : Used to print or check the latest inserted element

// we dont have to do push_back only push is enough because in stack the insertion and deletion take place at only one end that is top
#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    // for printing the element in stack we have to check the condition then we can print it.
    while(!st.empty()){
        cout<<st.top()<<"\n";
        st.pop();
    }
return 0;
}
