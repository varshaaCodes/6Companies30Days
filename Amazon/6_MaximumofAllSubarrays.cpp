// Maximum of all subarrays of size k


#include <bits/stdc++.h>
using namespace std;



class Solution
{
public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *a, int n, int k)
    {
        deque<int> dq;
        vector<int> ans;
        int i = 0;
        while (i < k)
        {
            while (!dq.empty() && dq.back() < a[i])
                dq.pop_back();
            dq.push_back(a[i]);
            i++;
        }
        ans.push_back(dq.front());
        while (i < n)
        {
            if (!dq.empty() && dq.front() == a[i - k])
                dq.pop_front();
            while (!dq.empty() && dq.back() < a[i])
                dq.pop_back();
            dq.push_back(a[i]);
            i++;
            ans.push_back(dq.front());
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

        int arr[n];
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
