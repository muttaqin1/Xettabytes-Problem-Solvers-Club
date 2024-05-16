#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

vector<ll> sieve(ll n)
{
    vector<bool> prime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {

        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                if (prime[j])
                    prime[j] = false;
            }
        }
    }
    vector<ll> res;
    fori(i, 2, n)
    {
        if (prime[i])
        {
            res.push_back(i);
        }
    }
    return res;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    vector<ll> sv = sieve(1e4 * 3);

    while (t--)
    {
        ll x;
        cin >> x;
        ll s = 1, curr = 1, cnt = 1;
        int f = 0;
        while (true)
        {
            if (cnt == 3)
                break;
            if ((sv[f] - curr) >= x)
            {
                curr = sv[f];
                cnt++;
                s *= sv[f];
                f++;
            }
            else
            {
                f++;
            }
        }
        cout << s << endl;
    }
    return 0;
}