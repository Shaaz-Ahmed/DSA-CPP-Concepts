// Linear search is a sequential search where we start from one end and traverse till the end of the array.
// we have to set the key key means the search element. It is simplest algorithm for finding the desired element.
// It will take three input array , array size and key
#include<iostream>
using namespace std;
int linearSearch(int arr[], int n , int key) {
    for(int i=0 ; i<n ; i++){
        if(arr[i]== key){
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<linearSearch(arr,n,key)<< " ";

    return 0;
}
