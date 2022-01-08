// IPL 2021 - Match Day 2

#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        vector<int> ans;
        deque<int> dq;
        int i = 0;
        while (i < n)
        {
            while (!dq.empty() and dq.front() == i - k)
                dq.pop_front();

            while (!dq.empty() and arr[dq.back()] < arr[i])
                dq.pop_back();

            dq.push_back(i);

            if (i >= k - 1)
                ans.push_back(arr[dq.front()]);

            i++;
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

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
} 
