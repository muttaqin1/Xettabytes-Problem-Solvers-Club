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
        int n;
        cin >> n;
        ll s = 0;
        fori(i, 0, n)
        {
            ll x;
            cin >> x;
            if (x > 0)
            {
                s += x;
            }
            else
            {
                if ((x * -1) <= s)
                {
                    s -= (x * -1);
                }
                else
                {

                    s = 0;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}