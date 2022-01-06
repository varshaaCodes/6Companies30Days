// Maximum Profit (buy and sellstocks atmost k times)


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(int k, int n, int prices[])
    {
        if (n <= 1)
            return 0;
        int dp[k + 1][n];
        memset(dp, 0, sizeof(dp));
        for (int t = 1; t <= k; t++)
        {
            int MAX = INT_MIN;
            for (int d = 1; d < n; d++)
            {
                MAX = max(MAX, dp[t - 1][d - 1] - prices[d - 1]);
                dp[t][d] = max(dp[t][d - 1], MAX + prices[d]);
            }
        }
        return dp[k][n - 1];
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
