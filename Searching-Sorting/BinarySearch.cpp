// searching mean to finding the element inside the array
// there are two approach linear and binary

//*****BINARY SEARCH*****
//we are using the binary search to search element in array in linear search the complexity is O(n) so to reduce the complexity we use binary search
// Condition 1: Array element should be in sorted order.

// It divides the array into two parts
// compare the element with search key is the search key is equal to middle it will get terminated.
// if the key is not found at the middle
        //- if the key is smaller than the middle then it will use left side array for search
        // - if the search key is greater than the middle then it will use right side array for search.

#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n , int key){
    int start = 0;
    int last = n;
    while(start<=last){
       int mid = (start + last)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            last = mid -1;
        }
        else{
            last = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout<<"Enter the size of array to search element :";
    cin>>n;
    cout<<"\n";

    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"The the key element to find";
    cin>>key;
    cout<<BinarySearch(arr , n ,key) <<"\n";
return 0;
}


