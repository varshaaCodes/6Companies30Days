//Company Name : Goldman Sachs

//Question 8

// Total Decoding Messages

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    const int mod = 1e9 + 7;

public:
    int CountWays(string s)
    {
        if (s.size() < 1)
            return 0;
        if (s[0] == '0')
            return 0;
        if (s.size() == 1)
            return 1;
        int l1 = 1;
        int l2 = 1;
        for (int i = 1; i < s.size(); i++)
        {
            int d1 = s[i] - '0';
            int d2 = (s[i - 1] - '0') * 10 + d1;
            int val = 0;
            if (d1 >= 1)
                val = (val + l2) % mod;
            if (d2 > 9 && d2 <= 26)
                val = (val + l1) % mod;
            else if (s[i] == '0')
                return 0;
            l1 = l2;
            l2 = val;
        }
        return l2 % mod;
    }
};


int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        Solution obj;
        int ans = obj.CountWays(str);
        cout << ans << "\n";
    }
    return 0;
} 
