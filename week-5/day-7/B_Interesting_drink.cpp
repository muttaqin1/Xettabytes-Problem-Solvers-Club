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
    vector<ll> arr(n);
    fori(i, 0, n) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        auto it = upper_bound(arr.begin(), arr.end(), x);
        it--;
        int ind = it - arr.begin();
        cout << ind + 1 << endl;
    }
    return 0;
}