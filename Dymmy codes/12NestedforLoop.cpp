//Nested for loop is means loop inside loop. The inner loop is executed fully when outer loop is executed once.
/**syntax:
    for(initialization ; contition ; increment / decrement) {
        for (initialization ; contition ; increment / decrement)
    }
**/
#include <iostream>
using namespace std;

int main() {
  for(int i=1 ; i<=5; i++) {
    for(int j=1 ; j<=5; j++) {
        cout<<i<<" "<<j<<"\n";
  }
  }
  return 0;
}
