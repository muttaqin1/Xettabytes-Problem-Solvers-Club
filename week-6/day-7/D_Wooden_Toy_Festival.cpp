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
        vector<int> a(n);
        fori(i, 0, n) cin >> a[i];
        sort(a.begin(), a.end());

        auto ok = [&](int mid)
        {
            int l = 0, cnt = 1;
            for (int r = 0; r < n; r++)
            {
                if ((a[r] - a[l]) > (2 * mid))
                {
                    cnt++;
                    l = r;
                }
            }
            return cnt <= 3;
        };

        int l = 0, r = 1e9, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}