//Company Name : Goldman Sachs
//Question 6

// Given two strings str1 and str2. We say that str2 divides str1 if it's possible


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if (str1 + str2 == str2 + str1)
            return str1.substr(0, __gcd(str1.size(), str2.size()));
        return "";
    }
};
