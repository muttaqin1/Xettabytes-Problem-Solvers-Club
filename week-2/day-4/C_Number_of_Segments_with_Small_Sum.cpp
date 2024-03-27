#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = 0;
    ll ans = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += arr[r];
        if (sum <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > s && l < n)
            {
                sum -= arr[l];
                l++;
            }
            if (sum <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}