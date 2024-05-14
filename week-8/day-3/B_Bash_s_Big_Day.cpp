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
    int n;
    cin >> n;
    vector<ll> arr(n);
    fori(i, 0, n) cin >> arr[i];

    map<ll, ll> m;
    fori(j, 0, n)
    {
        map<ll, ll> mp;
        ll curr = arr[j];
        for (int i = 2; i * i <= curr; i++)
        {
            if (curr % i == 0)
            {
                while (curr % i == 0)
                {
                    mp[i]++;
                    curr /= i;
                }
            }
        }
        if (curr > 1)
            mp[curr]++;

        for (auto v : mp)
        {
            m[v.first]++;
        }
    }
    ll x = 1;
    for (auto v : m)
    {
        if (v.second > x)
        {
            x = v.second;
        }
    }
    cout << x << endl;

    return 0;
}