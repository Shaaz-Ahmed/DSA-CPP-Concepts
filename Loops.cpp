//Loops are used to iterate the set instructions
#include<iostream>
using namespace std;
int main() {
//for loop() : It is used when we know exactly how many times we want to run block of code
// for(initialization ; condition ; update)

//program for loop
cout<<"*****FOR LOOPS*****\n";
for (int i=0; i<10 ; i++) {
    cout<< i <<"\n";
}
cout<<"\n";
cout<<"\n";
//Program for loop for printing even number from 1 to N
for (int i=0; i<=10 ; i=i+2){
    cout<<i<<"\n";
}
cout<<"\n";cout<<"\n";cout<<"\n";
//While loops:
//while loop execute the block of code till the given condition satisfied
cout<<"*****WHILE LOOPS*****";
int b = 0;
while(b<10){
    cout<<b<<"\n";
    b++;
}

cout<<"\n";cout<<"\n";
cout<<"*****Do WHILE LOOPS*****\n";
// This do while loop is a type of while loop this loops execute the statement once before checking the conditions.if the condition is true then it will execute till the consition become satisfied
int i=0;
do{
    cout<<i<<"\n";
    i++;
}
while(i<5);
return 0;
}
