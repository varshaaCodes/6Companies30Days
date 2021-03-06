//Goldman Sachs Q1
//Given an array of strings, return all groups of strings that are anagrams.

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string>> Anagrams(vector<string> &string_list);

vector<vector<string>> Anagrams(vector<string> &list)
{
    unordered_map<string, vector<string>> mp;
    vector<vector<string>> ans;
    for (auto x : list)
    {
        string t = x;
        sort(t.begin(), t.end());
        mp[t].push_back(x);
    }
    for (auto i : mp)
        ans.push_back(i.second);
    return ans;
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin >> string_list[i];
        vector<vector<string>> result = Anagrams(string_list);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
