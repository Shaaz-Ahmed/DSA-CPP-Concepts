// First and Last Position of an Element In Sorted Array

Problem statement:
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.



Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.



Note :
1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1.
2. 'arr' may contain duplicate elements.


Example:
Input: 'arr' = [0,1,1,5] , 'k' = 1

Output: 1 2

Explanation:
If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.


solution:

int firstoccurance(vector<int>& arr,int n,int key)

{

    int low=0;

    int high=n-1;

    int mid= low+(high-low)/2;

    int ans=0,count=0;



    while(low<=high)

    {

        if(key==arr[mid])

        {

            ans=mid;

            count++;

            high=mid-1;

        }

        else if(key<arr[mid])

        {

            high=mid-1;

        }

        else low=mid+1;



        mid= low+(high-low)/2;



    }

   if(count>0)  return ans;



    else return -1;



}



int lastoccurance(vector<int>& arr,int n,int key)

{

    int low=0;

    int high=n-1;

    int mid= low+(high-low)/2;

    int ans=0,count=0;



    while(low<=high)

    {

        if(key==arr[mid])

        {

            ans=mid;

            count++;

            low=mid+1;

        }

        else if(key<arr[mid])

        {

            high=mid-1;

        }

        else low=mid+1;



        mid= low+(high-low)/2;



    }



  if(count>0)  return ans;



  else return -1;

}



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)

{



    pair<int,int>p;



   p.first=firstoccurance(arr,n,k);

   p.second=lastoccurance(arr,n,k);



   return p;

}
