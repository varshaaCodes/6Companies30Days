// Column name from a given column number


#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    string colName(long long int n)
    {
        if (n == 0)
            return "";
        string ans = colName((n - 1) / 26);
        char ch = 'A' + (n - 1) % 26;
        ans.push_back(ch);
        return ans;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.colName(n) << '\n';
    }
}
