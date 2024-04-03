#include <bits/stdc++.h>
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
        int n, d;
        ll tmpr;
        cin >> n >> d >> tmpr;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (a <= tmpr)
                arr[i] = 1;
        }
        ll l = 0, r = 0, cnt = 0, tmp = 0;
        while (r < n)
        {
            if (arr[r] == 0)
            {
                tmp = 0;
                l = r + 1;
            }
            else if ((r - l + 1) >= d)
            {
                cnt += tmp + 1;
                tmp += 1;
            }

            r++;
        }
        cout << cnt << endl;
    }
    return 0;
}