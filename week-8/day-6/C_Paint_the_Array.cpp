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
        vector<ll> arr;
        ll gcd1 = -1;
        ll gcd2 = -1;
        forei(i, 1, n)
        {
            ll x;
            cin >> x;
            if (i % 2 == 0)
            {
                if (gcd2 != -1)
                {
                    gcd2 = __gcd(gcd2, x);
                }
                else
                {
                    gcd2 = x;
                }
            }
            else
            {
                if (gcd1 != -1)
                {
                    gcd1 = __gcd(gcd1, x);
                }
                else
                {
                    gcd1 = x;
                }
            }
            arr.push_back(x);
        }
        bool flag = false;
        for (int i = 0; i < n; i += 2)
        {
            if ((arr[i] % gcd2) == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            bool flag1 = false;
            for (int i = 1; i < n; i += 2)
            {
                if ((arr[i] % gcd1) == 0)
                {
                    flag1 = true;
                    break;
                }
            }
            if (flag1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << gcd1 << endl;
            }
        }
        else
        {
            cout << gcd2 << endl;
        }
    }
    return 0;
}