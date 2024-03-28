#include <bits/stdc++.h>
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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        map<char, int> mp;
        int odd_cnt = 0;
        int even_cnt = 0;
        for (auto v : str)
        {
            mp[v]++;
        }
        for (auto v : mp)
        {
            if (k == 0)
                break;
            if (v.second % 2 != 0)
            {
                mp[v.first]--;
                k--;
            }
        }
        for (auto v : mp)
        {
            // cout << v.first << " : " << v.second << endl;
            if (v.second <= 0)
                continue;

            if (v.second % 2 == 0)
                even_cnt++;
            else
                odd_cnt++;
        }
        if (odd_cnt == 0 || odd_cnt == 1)
        {
            if (even_cnt == 0 && odd_cnt == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}