// roate array by d place
#include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void leftRotate(int arr[], int n, int d){
//     reverse(arr, arr+d);
//     reverse(arr+d, arr+n);
//     reverse(arr, arr+n);
// }
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int d;
//     cin>>d;
//     leftRotate(arr,n,d);
//     for(int i=0; i<n; i++){
//         cout<< arr[i]<< " ";
//     }
//     return 0;
// }

vector<int> rotateArray(vector<int>arr, int k) {

    int start=-1;

    for(int i=0 ;i<k;i++){

        for(int i=0;i<arr.size()-1;i++){

            if(i==0){

               start=arr[i];

            }



            arr[i]=arr[i+1];

            if(i==arr.size()-2){

                arr[i+1]=start;

            }

        }



    }

    return arr;

}


