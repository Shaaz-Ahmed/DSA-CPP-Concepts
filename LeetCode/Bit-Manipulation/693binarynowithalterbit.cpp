Problem Statement
Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.



Example 1:

Input: n = 5
Output: true
Explanation: The binary representation of 5 is: 101
Example 2:

Input: n = 7
Output: false
Explanation: The binary representation of 7 is: 111.
Example 3:

Input: n = 11
Output: false
Explanation: The binary representation of 11 is: 1011.


 solution:

     class Solution {
public:
    bool hasAlternatingBits(int n) {
        // Get the last bit
        int lastBit = n & 1;
        n >>= 1;

        while (n > 0) {
            // Get the next bit
            int currentBit = n & 1;
            // Check if the last bit and current bit are the same
            if (currentBit == lastBit) {
                return false;
            }
            // Update last bit and shift n
            lastBit = currentBit;
            n >>= 1;
        }

        return true;
    }
};
