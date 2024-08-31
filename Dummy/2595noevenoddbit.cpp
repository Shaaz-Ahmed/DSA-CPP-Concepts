problem statement:
    2595. Number of Even and Odd Bits
Solved
Easy
Topics
Companies
Hint
You are given a positive integer n.

Let even denote the number of even indices in the binary representation of n with value 1.

Let odd denote the number of odd indices in the binary representation of n with value 1.

Note that bits are indexed from right to left in the binary representation of a number.

Return the array [even, odd].

Solution:
    class Solution {
public:
    vector<int> evenOddBit(int n) {
        int odd = 0;
        int even = 0;
        bool isEven = true;

        while (n) {
            if (n & 1) {
                if (isEven) {
                    even++;
                } else {
                    odd++;
                }
            }
            n >>= 1;
            isEven = !isEven;
        }

        return {even, odd};
    }
};

