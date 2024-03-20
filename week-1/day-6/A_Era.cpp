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
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll x = 0;
        ll cnt = 0;
        while (x < n)
        {
            if (arr[x] > (x + cnt + 1))
            {
                cnt += (arr[x] - (x + cnt + 1));
            }
            x++;
        }
        cout << cnt << endl;
    }
    return 0;
}