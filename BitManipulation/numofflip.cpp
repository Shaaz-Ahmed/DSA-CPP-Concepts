
Problem statement
Ninja is learning the binary representation of the numbers. He wanted to practice the topic, so he picked a question. The problem statement says, two numbers, ‘A’ and ‘B’ are given. Find the number of bits of ‘B’ that should be flipped to convert it into ‘A’.Can you help Ninja to solve this problem?

You are given two integers, ‘A’ and ‘B’.Find the number of bits of ‘B’ that should be flipped to convert it into ‘A’.

For Example
If ‘A’ is 13(1101) and ‘B’ is 7(0111), The number of bits that should be flipped is 2(0111).

solution

#include <bits/stdc++.h>

int numberOfFlips(int a, int b)

{

    // Write your code here.

    int p=a^b;

    int c=0;

    while(p>=1)

    {

        if(p%2==1) c++;

        p=p>>1;

    }

    return c;

}
