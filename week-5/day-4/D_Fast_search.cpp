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
        int a, b;
        cin >> a >> b;
        auto it = lower_bound(arr.begin(), arr.end(), a);
        int l;
        l = it - arr.begin();
        auto it1 = upper_bound(arr.begin(), arr.end(), b);
        int r;
        it1--;
        r = it1 - arr.begin();
        // cout << l << " " << r << endl;
        cout << (r - l + 1) << " ";
    }
    return 0;
}