//link - https://practice.geeksforgeeks.org/problems/amend-the-sentence3235/1#



#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        string ans="";
        for(auto c : s){
            if(isupper(c) && ans!=""){
                ans.push_back(' ');
                
            }ans.push_back(tolower(c));
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  
