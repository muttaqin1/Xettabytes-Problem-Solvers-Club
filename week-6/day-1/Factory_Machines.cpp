#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;
bool ok(ll mid, vector<ll> &machine, ll t)
{
    ll cnt = 0;
    fori(i, 0, machine.size())
    {
        cnt += (mid / machine[i]);
        if (cnt >= t)
            return true;
    }
    return false;
}

int main()
{
    fastread();
    ll n, t;
    cin >> n >> t;
    vector<ll> machine(n);
    ll mx = 0;
    fori(i, 0, n)
    {
        cin >> machine[i];
        mx = max(mx, machine[i]);
    }
    ll l = 0, r = (mx * t), ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid, machine, t))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}