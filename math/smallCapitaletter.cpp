// Check the entered character is small or capital
#include<iostream>
using namespace std;
int main() {
    int ch;
    cout<<"Enter the character: ";
    cin>>ch;
    if(ch > 'a' && ch < 'z'){
        cout<<"Small Letter";
    }
    else{
        cout<<"Capital Letter";
    }
return 0;
}
