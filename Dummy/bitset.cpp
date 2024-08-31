You are given a sequence of only digits in the form of a string 'DIGIT_PATTERN', your task is to find the first repeating digit. If no digit is repeating you should return -1.

Example:

Given string of digits is 123456325. Now starting from the left, the first digit which is repeating is 3 as till 2nd 3 every digit is encountered 1st time and thus our answer for this input will be 3.


solution:



    #include <bits/stdc++.h>

int findFirstRepeatingDigit(string digitPattern) {

    // Create a map

    map<int,int> mp;



    for(int i=0;i<digitPattern.size();i++){

        //Increment in map

        mp[digitPattern[i]]++;



        //If it's repeating then true

        if(mp[digitPattern[i]]==2)

        //Char converts in ASCII and 48 is ASCII of 0

        return int(digitPattern[i])-48;

    }

    return -1;

}
