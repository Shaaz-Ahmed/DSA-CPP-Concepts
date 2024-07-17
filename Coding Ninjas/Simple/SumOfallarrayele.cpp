Problem statement
Given an array of length N, you need to find and print the sum of all elements of the array.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 10^6
Note for C++:
It is advisable to declare an array with a size that can accommodate all the elements, considering that N has a maximum value of 10^5.
Sample Input :
3
9 8 9
Sample Output :
26

// Solution

#include <iostream>

using namespace std;



long arraySum(int *arr, int n) {

  int sum = 0;



  for (int i = 0; i < n; i++) {

    sum += arr[i];
    //sum = sum+a[i];

  }

  return sum;

}



int main() {

  /* Read input as specified in the question.

   * Print output as specified in the question.

   */

  int n;

  cin >> n;

  int *arr = new int[n];



  for (int i = 0; i < n; i++) {

    cin>>arr[i];

  }

  cout<<arraySum(arr,n)<<endl;

  return 0;

}
