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
        ll N = (n * (n - 1)) / 2;
        vector<ll> arr(N);
        fori(i, 0, N) cin >> arr[i];
        sort(arr.begin(), arr.end());
        int x = -1;
        fored(i, n - 1, 0)
        {
            x += i;
            cout << arr[x] << " ";
        }
        cout << endl;
    }
    return 0;
}