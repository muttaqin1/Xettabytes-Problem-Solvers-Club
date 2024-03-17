#include <bits/stdc++.h>
using namespace std;

int main()
{
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

    int x = 0, y = 0, ans = 0;
    while (y < m)
    {
        int curr = b[y];
        while (a[x] < curr && x < n)
        {
            x++;
            ans++;
        }
        cout << ans << " ";
        y++;
    }
    cout << endl;
    return 0;
}