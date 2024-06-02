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
        ll a, b, k;
        cin >> a >> b >> k;
        ll x = b;
        int op = 0;
        while (1)
        {
            if (x % k == 0 && x / k >= a)
            {
                op++;
                x /= k;
            }
            else if (x % k == 0)
            {
                op += (x - a);
                break;
            }
            else
            {
                op += x % k;
                x -= x % k;
            }
        }
        cout << op << endl;
    }
    return 0;
}