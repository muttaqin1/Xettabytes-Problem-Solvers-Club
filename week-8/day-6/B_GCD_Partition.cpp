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
        vector<ll> arr(n);
        ll sum = 0;
        fori(i, 0, n)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        ll curr = 0, ans = 0;
        fori(i, 0, n - 1)
        {
            curr += arr[i];
            sum -= arr[i];
            ans = max(ans, __gcd(curr, sum));
        }
        cout << ans << endl;
    }
    return 0;
}