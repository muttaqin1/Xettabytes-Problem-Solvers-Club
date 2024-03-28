#include <bits/stdc++.h>
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
        map<ll, int> mp;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (!mp.count(a))
            {
                mp.insert({a, 1});
                mx = max(mx, mp[a]);
            }
            else
            {
                mp[a]++;
                mx = max(mx, mp[a]);
            }
        }
        int occ = mx;
        int cpy = 0;
        while (occ < n)
        {
            cpy++;
            occ *= 2;
        }

        cout << cpy + (n - mx) << endl;
    }
    return 0;
}