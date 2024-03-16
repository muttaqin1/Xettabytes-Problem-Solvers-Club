#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();

    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m), r;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int x = 0, y = 0;
    while (x < n || y < m)
    {
        if (x < n && (y >= m || a[x] < b[y]))
        {
            r.push_back(a[x]);
            x++;
        }
        else
        {
            r.push_back(b[y]);
            y++;
        }
    }
    for (auto v : r)
        cout << v << " ";
    cout << endl;

    return 0;
}