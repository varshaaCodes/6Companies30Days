//Company Name : Goldman Sachs
//Question 4

//Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.


#include <bits/stdc++.h>
using namespace std;

string encode(string src);

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;

        cout << encode(str) << endl;
    }
    return 0;
} // } Driver Code Ends

/*You are required to complete this function */

string encode(string src)
{
    string res = "";
    int count = 1;
    int i = 0;
    while (i < src.size() - 1)
    {
        if (src[i] == src[i + 1])
            count++;
        else
        {
            res.push_back(src[i]);
            res += to_string(count);
            count = 1;
        }
        i++;
    }
    res.push_back(src[i]);
    res += to_string(count);
    return res;
}
