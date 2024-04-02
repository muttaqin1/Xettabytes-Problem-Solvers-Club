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
        int n, q;
        cin >> n >> q;
        vector<ll> arr(n);
        map<ll, pair<ll, ll>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (!mp.count(arr[i]))
                mp[arr[i]] = {i, i};
            else if (mp[arr[i]].second < i)
                mp[arr[i]].second = i;
        }
        while (q--)
        {
            ll a, b;
            cin >> a >> b;
            if (mp.count(a) && mp.count(b))
            {
                if (mp[a].first < mp[b].second)
                    cout << "YES";
                else
                    cout << "NO";
                cout << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}