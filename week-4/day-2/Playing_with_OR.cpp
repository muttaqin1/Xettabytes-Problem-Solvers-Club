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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        fori(i, 0, n)
        {
            cin >> arr[i];
        }
        int l = 0, r = 0, ans = 0;
        int odd = 0;
        while (r < n)
        {
            if (arr[r] % 2 != 0)
                odd++;
            if ((r - l + 1) == k)
            {
                if (odd > 0)
                    ans++;
            }
            else if ((r - l + 1) > k)
            {
                if (arr[l] % 2 != 0)
                {
                    odd--;
                    l++;
                }
                else
                {
                    l++;
                }
                if (odd > 0)
                    ans++;
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}