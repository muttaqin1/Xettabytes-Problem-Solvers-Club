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
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int x = 0, y = 0;
    ll ans = 0;

    while (x < n && y < m)
    {

        int c = 0, d = 0, curr = a[x];
        while (a[x] == curr && x < n)
        {
            c++;
            x++;
        }

        while (curr > b[y] && y < m)
            y++;

        while (b[y] == curr && y < m)
        {
            d++;
            y++;
        }
        ans += (1LL * c * d);
    }
    cout << ans << endl;
    return 0;
}