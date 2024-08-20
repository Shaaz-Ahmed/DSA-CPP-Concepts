
// ceil : ceil means smallest number in array  >=x


int ceilSearch(vector<int> & arr, int X, int N)

{

    int ans=-1;

    for(int i=0;i<N;i++)

    {

        if(arr[i]>=X)

        {

            ans=arr[i];

        }

    }

    return ans;

}
