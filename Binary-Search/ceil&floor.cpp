// ceil ad floor

problem statement:

Problem statement
You're given a sorted array 'a' of 'n' integers and an integer 'x'.



Find the floor and ceiling of 'x' in 'a[0..n-1]'.



Note:
Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.


Example:
Input:
n=6, x=5, a=[3, 4, 7, 8, 8, 10]


int find_floor(vector<int> &arr,int n,int x){

    int low =0;

    int high =n-1;

    int ans =-1;

    while(low<=high){

    int mid = (low+high)/2;

        if(arr[mid]<=x){

            ans = arr[mid];

            low = mid+1;

                } else {

                        high = mid - 1;

                }

        }

                return ans;

}

int find_ciel(vector<int> &arr,int n,int x){

int ans= -1;

    int low =0;

    int high =n-1;

    while(low<=high){

        int mid = (low+high)/2;

        if(arr[mid]>=x){

            ans=arr[mid];

            high = mid-1;

        }else{

            low = mid+1;

        }

    }

    return ans;

}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {

    // Write your code here.



int f=  find_floor(a, n, x);

    int c=find_ciel(a, n, x);

    return make_pair(f,c);



}
