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
        int n, q;
        cin >> n >> q;
        vector<ll> arr(n);
        ll sum = 0;
        fori(i, 0, n)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        vector<ll> prefix_sum(n);
        prefix_sum[0] = arr[0];
        fori(i, 1, n)
        {
            prefix_sum[i] = arr[i] + prefix_sum[i - 1];
        }
        while (q--)
        {
            ll x;
            cin >> x;
            auto it = lower_bound(prefix_sum.begin(), prefix_sum.end(), x);
            if (it == prefix_sum.end())
                cout << -1;
            else
                cout << (it - prefix_sum.begin()) + 1;
            cout << endl;
        }
    }

    return 0;
}