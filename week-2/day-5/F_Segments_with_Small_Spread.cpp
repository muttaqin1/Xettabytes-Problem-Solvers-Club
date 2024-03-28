#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();

    int n;
    ll k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll l = 0, r = 0, ans = 0;
    multiset<ll> ms;
    while (r < n)
    {
        ms.insert(arr[r]);
        ll mn = *ms.begin(), mx = *ms.rbegin();
        if ((mx - mn) <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l < r)
            {
                mn = *ms.begin(), mx = *ms.rbegin();
                if ((mx - mn) <= k)
                {
                    break;
                }
                auto it = ms.find(arr[l]);
                ms.erase(it);
                l++;
            }
            mn = *ms.begin(), mx = *ms.rbegin();
            if ((mx - mn) <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}