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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    fori(i, 0, n)
    {
        cin >> arr[i];
    }
    map<ll, ll> mp;
    ll x = 0, mx = 0;
    fori(i, 0, n)
    {
        if (mp.find(arr[i]) == mp.end())
        {
            mp[arr[i]] = i;
        }
        else
        {
            if (mp[arr[i]] >= x)
            {
                x = mp[arr[i]] + 1;
            }
            mp[arr[i]] = i;
        }

        mx = max(mx, i - x + 1);
    }
    cout << mx << endl;
    return 0;
}