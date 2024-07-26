// Linked list is a linear data structure
// array is a single block of storage with partitions whereas linked list is a multiple block of storage with linked each other thats why its called linked list
// array limitation:
// 1. Array size is fixed
// 2. contigious block of memory
// 3. insertion and deletion is costly because if want to insert the element in-between then we have to increase each element and add
// - but in linked list we can add element anywhere we just have to link it

// benefits of linked list
// 1. size can be modified
// 2. npn-contigious memory
// 3. insertion and deletion at any points and its easier.

// ***** Linked list structure
// Node : it has two part 1. node 2. next data contain the actial data whreas next contain the address of next node.
// last node of linked list next part contain null value because it does not have any more element further.

// head pointer : head pointer stores the address of first node of linked list
// when the next is NULL then it will be the last node

// int data (it mean the data type of data is int)
// node* next (it mean the data type of next is node*)
// we can add or insert the new node at the start , at the end , at anywhere


#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int data){
     val = data;
     next = NULL;
    }
};

int main() {
 Node* n = new Node(1);
 cout<<n->val<<" "<<n->next;
}
