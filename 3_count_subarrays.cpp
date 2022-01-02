//Company Name : Goldman Sachs 
//Question 3
//Count the subarrays having product less than k

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubArrayProductLessThanK(const vector<int> &nums, int n, long long k)
    {
        if (k <= 1)
            return 0;
        long long product = 1;
        long long res = 0, l = 0, r = 0;
        while (r < n)
        {
            product *= nums[r];
            while (l <= r && product >= k)
                product /= nums[l++];
            res += r - l + 1;
            r++;
        }
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
