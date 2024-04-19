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
    ll n, l, r, d;
    cin >> n >> l >> r >> d;
    vector<ll> cost(n);
    fori(i, 0, n) cin >> cost[i];
    ll cnt = 0;
    fori(i, 0, (1 << n))
    {

        ll c = 0;
        ll mn = INT_MAX;
        ll mx = INT_MIN;
        int x = 0;
        fori(j, 0, n)
        {
            if (i & (1 << j))
            {
                x++;
                c += cost[j];
                mn = min(mn, cost[j]);
                mx = max(mx, cost[j]);
            }
        }
        if (x >= 2 && c >= l && c <= r && abs(mx - mn) >= d)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}