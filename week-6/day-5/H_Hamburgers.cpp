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
    string str;
    cin >> str;
    ll need_b = 0, need_s = 0, need_c = 0;
    fori(i, 0, str.size())
    {
        if (str[i] == 'B')
            need_b++;
        else if (str[i] == 'S')
            need_s++;
        else
            need_c++;
    }
    ll have_b, have_s, have_c;
    cin >> have_b >> have_s >> have_c;
    ll cost_b, cost_s, cost_c;
    cin >> cost_b >> cost_s >> cost_c;
    ll money;
    cin >> money;
    auto check = [&](ll mid)
    {
        ll x_b = need_b * mid, x_s = need_s * mid, x_c = need_c * mid;
        ll req_b = 0, req_s = 0, req_c = 0;
        if ((have_b - x_b) < 0)
            req_b = abs(have_b - x_b);
        if ((have_s - x_s) < 0)
            req_s = abs(have_s - x_s);
        if ((have_c - x_c) < 0)
            req_c = abs(have_c - x_c);
        ll price_b = req_b * cost_b, price_s = req_s * cost_s, price_c = cost_c * req_c;
        return (price_b + price_c + price_s) <= money;
    };
    // r ????
    ll l = 0, r = 100000000000000ll, mid, ans;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
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
    return 0;
}