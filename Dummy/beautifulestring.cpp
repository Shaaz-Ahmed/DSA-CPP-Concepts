
int makeBeautiful(string str) {

    int n=str.size();

    int cnt1=0;

    int cnt2=0;

    char ch1='0';

    char ch2='1';

    for(int i=0;i<n;i++){

         if(ch1!=str[i]){

             cnt1++;

         }

         if(ch2!=str[i]){

             cnt2++;

         }

         char ch=ch1;

         ch1=ch2;

         ch2=ch;

    }

    int ans=min(cnt1,cnt2);

    return ans;

}
