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
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    fori(i, 0, n) cin >> arr[i];
    while (q--)
    {
        ll x;
        cin >> x;
        int mx = 0;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            int mid = (i + j) / 2;
            if (arr[mid] > x)
            {
                j = mid - 1;
            }
            else
            {
                mx = max(mx, (mid + 1));
                i = mid + 1;
            }
        }
        cout << mx << endl;
    }
    return 0;
}