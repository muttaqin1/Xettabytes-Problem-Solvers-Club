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
        ll l, r;
        cin >> l >> r;
        if (r <= 3)
            cout << -1 << endl;
        else if (l == r)
        {
            if (l % 2 == 0)
            {
                cout << 2 << " " << l - 2 << endl;
            }
            else
            {

                bool flag = false;
                for (ll i = 3; i * i <= l; i++)
                {
                    if (__gcd(i, l - i) != 1)
                    {
                        flag = true;
                        cout << i << " " << l - i << endl;
                        break;
                    }
                }
                if (!flag)
                    cout << -1 << endl;
            }
        }
        else
        {
            if (r % 2 == 0)
            {
                cout << 2 << " " << r - 2 << endl;
            }
            else
            {
                cout << 2 << " " << r - 3 << endl;
            }
        }
    }
    return 0;
}