
#include<stack>

vector<int> nextGreaterElement(vector<int>& arr, int n)

{

    // Write your code here

    stack<int> st;

    st.push(-1);

    vector<int> ans(n);



    for(int i=n-1;i>=0;i--){

        int cur=arr[i];



             while(st.top()<=cur ){

                if(st.top()==-1)

                 break;

                 st.pop();

             }

             ans[i]= st.top();

             st.push(cur) ;



    }

    return ans;

}
