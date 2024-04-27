#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

bool ok(ll mid, ll n, ll x, ll y)
{
    if (mid < min(x, y))
        return false;
    ll cnt = 1;
    mid -= min(x, y);
    cnt += ((mid / x) + (mid / y));
    return cnt >= n;
}

int main()
{
    fastread();
    ll n, x, y;
    cin >> n >> x >> y;
    ll l = 1, r = 2e8 * max(x, y), ans = 0, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid, n, x, y))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
    return 0;
}