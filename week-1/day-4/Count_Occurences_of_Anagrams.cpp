//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        int l = 0;
        int r = 0, count = 0;
        int sz = pat.size();
        unordered_map<char, int> mp;
        unordered_map<char, int> aux;
        for (auto v : pat)
        {
            if (!mp.count(v))
                mp.insert({v, 1});
            else
                mp[v]++;
        }

        while (r < txt.size())
        {
            if (!aux.count(txt[r]))
                aux.insert({txt[r], 1});
            else
                aux[txt[r]]++;
            if ((r - l + 1) == sz)
            {
                bool flag = true;
                for (auto x : mp)
                {
                    if (aux[x.first] != x.second)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    count++;
                aux[txt[l]]--;
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends