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

    int n;
    cin >> n;
    vector<int> arr(n);
    fori(i, 0, n) cin >> arr[i];
    vector<int> px_sum(n);
    px_sum[0] = arr[0];
    fori(i, 1, n) px_sum[i] = arr[i] + px_sum[i - 1];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(px_sum.begin(), px_sum.end(), x);
        int ind = it - px_sum.begin();
        cout << (ind + 1) << endl;
    }

    return 0;
}