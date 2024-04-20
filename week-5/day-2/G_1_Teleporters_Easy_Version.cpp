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
        int n, c;
        cin >> n >> c;
        vector<ll> arr(n);
        fori(i, 0, n)
        {
            cin >> arr[i];
            arr[i] += (i + 1);
        }
        sort(arr.begin(), arr.end());
        ll ans = 0, s = 0, x = 0;
        while (x < n && s < c)
        {
            if (s + arr[x] > c)
                break;
            else
                s += arr[x];
            ans++;
            x += 1;
        }
        cout << ans << endl;
    }
    return 0;
}