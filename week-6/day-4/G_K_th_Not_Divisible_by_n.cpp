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
        ll n, k;
        cin >> n >> k;

        ll l = 1, r = LONG_MAX, mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            int x = mid - mid / n;

            if (x > k)
            {
                r = mid - 1;
            }
            else if (x < k)
            {
                l = mid + 1;
            }
            else
            {

                ans = mid;
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}