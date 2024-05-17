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
        ll a, b;
        cin >> a >> b;
        ll good = (a * b) * 2;
        ll nearly2 = a * (b - 1), nearly1 = a;
        if (b == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        cout << nearly1 << " " << good - nearly1 << " " << good << endl;
    }
    return 0;
}