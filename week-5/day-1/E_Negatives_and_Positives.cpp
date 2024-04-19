#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;
map<int, ll> cache;
ll solve(int n, vector<ll> &arr)
{
    if (n < 0)
        return 0;
    if (cache.find(n) != cache.end())
        return cache[n];
    ll mx = LONG_MIN;
    if ((n - 1) >= 0 && (arr[n] <= 0 || arr[n - 1] <= 0))
    {
        mx = max(mx, solve(n - 2, arr) + ((arr[n] * -1) + (arr[n - 1] * -1)));
    }
    mx = max(mx, solve(n - 1, arr) + arr[n]);
    return cache[n] = mx;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        cache.clear();
        int n;
        cin >> n;
        vector<ll> arr(n);
        fori(i, 0, n) cin >> arr[i];
        sort(arr.begin(), arr.end());
        cout << solve(n - 1, arr) << endl;
    }
    return 0;
}