#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

bool ok(ll h, vector<ll> &arr, ll x)
{
    ll w = 0;
    fori(i, 0, arr.size())
    {
        if (arr[i] >= h)
            continue;
        w += (h - arr[i]);
    }
    return w <= x;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        fori(i, 0, n) cin >> arr[i];
        ll l = 0, r = 1e12, ans = 0, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid, arr, x))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}