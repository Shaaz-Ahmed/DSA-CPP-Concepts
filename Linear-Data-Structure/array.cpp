// Array:
// Array is a linear data structure it is a collection of similar data types
// Array list to store the data of similar type.
// syntax: data_type array_name [size] = { elements , , , }
// array element is seperated by commas
// suppose array is of int type and int is having of 4 bytes lets assume array is of 4 then 4 * 4 = 16 bytes
// based on size and data types it gives the block of memory . it reserve the block of memory

// Indexing : If we want to access any element inside the array so we can access using indexing
// array index from zero

// sample program of array
#include<iostream>
using namespace std;
int main() {
   // int array[4] = {10,20,30,40};  // array initilization.
   // cout<<array[2];         // array accessing.

   //****** printing array taking input from use *****
   int n;
   cout<<"Enter the size of array : ";
   cin>>n;

   int array[n];

   for(int i=0; i<n; i++){
    cin>>array[i];
   }

   for(int i=0; i<n; i++){
    cout<<array[i] << " ";
   }
return 0;
}
