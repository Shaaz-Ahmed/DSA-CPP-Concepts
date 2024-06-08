//basically this break and continue both are work on loop
// break: This break statement is used to terminate or ends the loop.
// continue: This continue is used to skip the loop
#include<iostream>
using namespace std;
int main() {

cout<<"******BREAK STATEMENT*****\n\n";
for(int i=0 ; i<10 ; i++){
    if(i==4){  //This will break on 4th index that is on 3
        break;
    }
    cout<<i<<"\n";
}

cout<<"******CONTINUE STATEMENT ******\n\n";
for(int b=0; b<=10; b++){
    if(b==7){  //This will skip only 7 and it will continue till end
        continue;
    }
    cout<<b<<"\n";
}
return 0;
}
