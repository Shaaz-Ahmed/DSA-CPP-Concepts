vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>>ans;
    sort(arr.begin(), arr.end() );
    for(int i =0; i<n; i++){
        if (i != 0 && arr[i] == arr[i - 1]) continue;
        int start =i+1,end =n-1;
        while(start<end){
            int target = -arr[i];
            int sum = arr[start] +arr[end];
            if(sum == target ){
                ans.push_back( {arr[i], arr[start], arr[end]} );
                start++,end--;
                while(start<end && arr[start] == arr[start-1]) start++;
                while(start<end && arr[end] == arr[end+1]) end--;
            }else if (sum<target){
                start++;
            }else{
                end--;
            }
        }
    }
    return ans;

}
// follow theory from book
