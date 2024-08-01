// Swap the two number using XOR;

#include <bits/stdc++.h>
vector<int> swapNumber(int x, int y) {
    // Write your code here.
    x = x^y;
    y = x^y;
    x = x^y;

    return {x,y};
}



