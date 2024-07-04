// WAP to check larger number among the three number

#include<iostream>
using namespace std;
int main() {
    int a,b,c;
        cout<<"Enter three numbers : ";
        cin>>a>>b>>c;
            if(a>b){
                if(a>c){
                    cout<<"A is Larger among three";
                }
                else{
                    cout<<" C is largest among three";
                }

            }
            else {
        // If 'b' is greater than 'a', compare 'b' with 'c'
        if (b >= c) {
            // If 'b' is also greater than or equal to 'c',
            // it is the largest number
            cout << "The Largest Among Three Numbers is : "
                 << b << endl;
        }
        else {
            // If 'b' is not greater than or equal to 'c',
            // 'c' must be the largest number
            cout << "The Largest Among Three Numbers is : "
                 << c << endl;
        }
    }
return 0;
}
