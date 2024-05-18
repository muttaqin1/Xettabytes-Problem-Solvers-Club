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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        if (m <= 4)
        {
            ll p = 1;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m; j++)
                    cout << p++ << " ";
                cout << endl;
            }
        }
        else
        {
            ll p = 1;
            vector<vector<ll>> v(n, vector<ll>(m, 0));

            for (ll i = 0; i < m; i += 2)
                for (ll j = 0; j < n; j++)
                    v[j][i] = p++;

            for (ll i = 1; i < m; i += 2)
                for (ll j = 0; j < n; j++)
                    v[j][i] = p++;

            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m; j++)
                    cout << v[i][j] << " ";
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}