/**while loop is used when we have to run the loop until the condition become false.

syntax:
    while(condition) {.......};
    for(initialization ; condition ; increment/decrement)
**/
#include <iostream>

using namespace std;

int main() {
  int num=0;
    while(num <= 100) {
       num++;
        cout<<num <<"\n";
    }
    return 0;
}

