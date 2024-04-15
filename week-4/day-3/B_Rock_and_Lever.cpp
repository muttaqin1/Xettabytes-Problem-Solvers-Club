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
        int n;
        cin >> n;
        map<ll, ll> mp;
        fori(i, 0, n)
        {
            int a;
            cin >> a;
            mp[__lg(a)]++;
        }
        ll ans = 0;
        for (auto [x, y] : mp)
        {
            ans += ((y * (y - 1) / 2));
        }
        cout << ans << endl;
    }

    return 0;
}