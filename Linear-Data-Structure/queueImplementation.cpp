#include<iostream>
using namespace std;
#define n 20;
class queue{
    int* arr[];
    int front;
    int back;
public:
    queue(){
    arr = new int[n];
    front = -1;
    back = -1;
    }
    //push operation
    void push(int x){
     if(back == n-1){
        cout<<"Queue is overflow";
        return;
     }
     back++;
     arr[back] = x;
     if(front == -1){
        front++;
     }
    }

};
int main() {

    queue q;
    q.push(1);
    q.push(2);

    cout<<q.push();
return 0;
}
