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
    int n, k;
    cin >> n >> k;
    ll s = 0;
    vector<ll> arr(n);
    fori(i, 0, n) cin >> arr[i];
    auto check = [&](ll mid)
    {
        ll cnt = 0, sum = 0;
        fori(i, 0, n)
        {
            s += arr[i];
            if (arr[i] > mid)
                return false;
            sum += arr[i];
            if (sum > mid)
            {
                cnt++;
                sum = arr[i];
            }
        }
        if (sum < mid)
            cnt++;
        return cnt <= k;
    };
    ll l = 0, r = 1e16, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (check(mid))
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