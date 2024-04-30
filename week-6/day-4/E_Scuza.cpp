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
        vector<ll> px_k(n);
        vector<ll> px_sum(n, 0);
        fori(i, 0, n) cin >> arr[i];

        px_k[0] = arr[0];
        px_sum[0] = arr[0];
        fori(i, 1, n)
        {
            if (arr[i] > px_k[i - 1])
                px_k[i] = arr[i];
            else
                px_k[i] = px_k[i - 1];
            px_sum[i] = arr[i] + px_sum[i - 1];
        }
        while (q--)
        {
            ll k;
            cin >> k;
            auto it = upper_bound(px_k.begin(), px_k.end(), k);
            it--;
            int idx = it - px_k.begin();
            if (k == 0 || idx == -1)
                cout << 0 << " ";
            else
                cout << px_sum[idx] << " ";
        }
        cout << endl;
    }
    return 0;
}