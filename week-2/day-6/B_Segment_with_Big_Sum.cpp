#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();

    int n;
    cin >> n;
    ll s;
    cin >> s;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll l = 0, r = 0;
    ll sum = 0;
    ll ans = LONG_MAX;
    while (r < n)
    {
        sum += arr[r];
        if (sum >= s)
        {
            ans = min(ans, (r - l) + 1);
            while (l <= r)
            {
                if (sum < s)
                    break;
                sum -= arr[l];
                l++;
                if (sum >= s)
                {
                    ans = min(ans, (r - l) + 1);
                }
            }
        }
        r++;
    }
    cout << (ans == LONG_MAX ? -1 : ans) << endl;

    return 0;
}