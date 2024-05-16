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
        ll x, y;
        cin >> x >> y;
        map<ll, ll> mp;
        int n = y;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    mp[i]++;
                    n /= i;
                }
            }
        }
        if (n > 1)
            mp[n]++;
        bool flag = true;
        for (auto v : mp)
        {
            if ((x % v.first) != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}