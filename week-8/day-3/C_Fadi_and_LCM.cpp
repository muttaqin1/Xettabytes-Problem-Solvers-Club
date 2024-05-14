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
    ll n;
    cin >> n;
    ll res = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && (i / __gcd(i, n / i) * n / i) == n)
        {
            res = i;
        }
    }
    cout << res << " " << n / res << endl;
    return 0;
}