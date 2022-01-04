//Company Name : Goldman Sachs
//Question 11

//Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B'

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {
        int *ans = new int[2];
        int missing, repeated;
        for (int i = 0; i < n; i++)
        {
            if (arr[abs(arr[i]) - 1] > 0)
                arr[abs(arr[i]) - 1] *= -1;
            else
                repeated = abs(arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
                missing = i + 1;
        }
        ans[0] = repeated;
        ans[1] = missing;
        return ans;
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
