#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

bool ok(ll mid, vector<ll> &arr, ll k)
{
    ll cnt = 0;
    fori(i, arr.size() / 2, arr.size())
    {
        cnt += (arr[i] < mid ? mid - arr[i] : 0);
    }
    return cnt <= k;
}
int main()
{
    fastread();
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    ll mx = 0;
    fori(i, 0, n)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    sort(arr.begin(), arr.end());
    ll l = 1, r = 2e9, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid, arr, k))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}