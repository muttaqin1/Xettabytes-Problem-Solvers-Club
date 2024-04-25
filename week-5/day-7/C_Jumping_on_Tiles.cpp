#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, vector<int>> mp;
        int n = s.size();
        fori(i, 0, n) mp[s[i]].push_back(i);
        vector<int> ans;
        int dir = (s[0] < s[n - 1]) ? 1 : -1;
        for (char ch = s[0]; ch != s[n - 1] + dir; ch += dir)
        {
            for (auto v : mp[ch])
            {
                ans.push_back(v);
            }
        }
        int cost = 0;
        fori(i, 1, ans.size())
        {
            cost += abs(s[ans[i]] - s[ans[i - 1]]);
        }
        cout << cost << " " << ans.size() << endl;
        for (auto v : ans)
        {
            cout << v + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}