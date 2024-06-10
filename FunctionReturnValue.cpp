// In previous example we use return type as a void it mean it does not return any value
// void int it basically return a value you can use a data type such as int , string and use keyword return inside the function

#include<iostream>
using namespace std;
int xyz(int x){
    return 5 + x;
}
int xyz1(int x1){
    return x1;
}
int addition(int a , int b){
    return a + b;
}
int main() {
    cout<< xyz(5);
    cout<<"\n";
    cout<< xyz1(3);
    cout<<"\n";
    int z = addition(5 , 10);
    cout<<"addition is :" << z;
    return 0;
}
