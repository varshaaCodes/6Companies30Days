//Company Name : Goldman Sachs

//Question 13

//Decode the string

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int isDigit(char &c)
    {
        return (c >= '0' and c <= '9');
    }
    string decode(string &s, int &i)
    {
        string res = "";
        while (i < s.size() && s[i] != ']')
        {
            if (!isDigit(s[i]))
                res.push_back(s[i++]);
            else
            {
                int num = 0;
                while (i < s.size() and isDigit(s[i]))
                    num = num * 10 + (s[i++] - '0');
                i++; //'['
                string next = decode(s, i);
                i++; //']'
                while (num--)
                    res.append(next);
            }
        }
        return res;
    }

public:
    string decodedString(string s)
    {
        int i = 0;
        return decode(s, i);
    }
};



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.decodedString(s) << "\n";
    }
    return 0;
} 

