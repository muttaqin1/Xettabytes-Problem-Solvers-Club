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
        vector<vector<int>> pairs(1001);

        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (__gcd(i, j) == 1)
                {
                    pairs[i].push_back(j);
                }
            }
        }

        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        fori(i, 0, n)
        {
            cin >> arr[i];
            mp[arr[i]] = i + 1;
        }

        int ans = -1;
        forei(i, 1, 1000)
        {
            for (auto v : pairs[i])
            {
                if (mp.count(i) && mp.count(v))
                {
                    ans = max(ans, mp[i] + mp[v]);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}