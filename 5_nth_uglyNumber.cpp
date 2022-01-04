//Company Name : Goldman Sachs
//Question 5

//// Nth ugly number

#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

class Solution
{
public:
    
    ull getNthUglyNo(int n)
    {
        ull dp[n + 1];
        dp[1] = 1;
        int p2 = 1, p3 = 1, p5 = 1;
        for (int i = 2; i <= n; i++)
        {
            ull val2 = dp[p2] * 2;
            ull val3 = dp[p3] * 3;
            ull val5 = dp[p5] * 5;
            dp[i] = min(val2, min(val3, val5));
            if (dp[i] == val2)
                p2++;
            if (dp[i] == val3)
                p3++;
            if (dp[i] == val5)
                p5++;
        }
        return dp[n];
    }
};



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
