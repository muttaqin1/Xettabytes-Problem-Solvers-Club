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
        int n, q;
        cin >> n >> q;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> prefix_sum(n + 1);
        for (int i = 1; i <= n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
        }
        while (q--)
        {
            int l, r;
            ll k;
            cin >> l >> r >> k;
            ll left = prefix_sum[l - 1];
            ll right = prefix_sum[n] - prefix_sum[r];
            ll x = r - l + 1;
            if (((k * x) + left + right) % 2 != 0)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
    }
    return 0;
}