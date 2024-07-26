// stack is a linear data structure
// In stack we store the list of items but we can add or remove at one end
// Stack follows Last in first out (LIFO) , the element which go last will come out first

// basically stack is having only 4 operation
// 1. push() : Used to add the element
// 2. pop() : Used to delete the element from stack
// 3. top() : Used to get top of the stack
// 4. empty() : Used to check if that the stack is empty or not

// possible condition :
// 1. if stack is -1 that means theres no element in stack , stack is empty.
// 2. push element is used to insert the element.
// 3. if top == stack size it means stack is full.
// 4. pop means delete the element from the stack.

//Stack is LIFO it only has 4 properties push() , pop() , empty() , top()
//if stack == -1 then stack is empty
//if stack == max-size -1 then stack is overflow
//to add the element we have to check if the stack is full or not
//to delete the element we have to check that the stack contain the element to delete or not

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

// if top == -1 then stack is empty
// for inserting the element into stack first we have to check the stack is full or not is stack is having space then we can add or insert the element
// if stack == top print -> stack is full
