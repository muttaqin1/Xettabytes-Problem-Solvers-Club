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
        ll n;
        cin >> n;
        vector<ll> freq(n + 1);
        fori(i, 0, n)
        {
            int num;
            cin >> num;
            freq[num]++;
        }
        auto check = [=](ll mid)
        {
            ll a = mid, b = max(0LL, mid - 1);
            ll aux = freq[1] - b;
            bool flag = true;
            forei(i, 2, n)
            {
                if (aux >= a || !flag)
                    break;
                if (i > (aux + 1))
                    flag = false;
                else
                    aux += freq[i];
            }
            return aux >= a;
        };
        ll l = 0, r = freq[1], mid, ans;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (check(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}