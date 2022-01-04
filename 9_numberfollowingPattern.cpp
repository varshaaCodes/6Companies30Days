//Company Name : Goldman Sachs

//Question 9

//// Given a pattern containing only I's and D's. I for increasing and D for decreasing.
// Devise an algorithm to print the minimum number following that pattern.

#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    string printMinNumberForPattern(string S)
    {
        string ans = "1";
        int i = 0;
        while (i < S.size())
        {
            ans.push_back(i + 2 + '0');
            i++;
        }
        i = 0;
        while (i < S.size())
        {
            if (S[i] == 'I')
                i++;
            else
            {
                int j = i;
                while (i < S.size() && S[i] == 'D')
                    i++;
                reverse(ans.begin() + j, ans.begin() + i + 1);
            }
        }
        return ans;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0;
}
