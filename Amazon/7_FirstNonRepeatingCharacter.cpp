// First non-repeating character in a stream

#include <bits/stdc++.h>

using namespace std;


class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        int freq[26] = {0};
        queue<char> q;
        string ans = "";
        for (char &ch : A)
        {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 1)
                q.push(ch);
            while (!q.empty() && freq[q.front() - 'a'] != 1)
                q.pop();
            ans.push_back(q.empty() ? '#' : q.front());
        }
        return ans;
    }
};


int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string A;
        cin >> A;
        Solution obj;
        string ans = obj.FirstNonRepeating(A);
        cout << ans << "\n";
    }
    return 0;
} 
