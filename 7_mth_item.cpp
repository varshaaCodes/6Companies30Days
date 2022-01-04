//Company Name : Goldman Sachs
//Question 7

//Find the kid which gets tha damaged toy

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPosition(int N, int M, int K)
    {
        return ((M + K - 1) % N == 0) ? N : (M + K - 1) % N;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, K;

        cin >> N >> M >> K;

        Solution ob;
        cout << ob.findPosition(N, M, K) << endl;
    }
    return 0;
}
