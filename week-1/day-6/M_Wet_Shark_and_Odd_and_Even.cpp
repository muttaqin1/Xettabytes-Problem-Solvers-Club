#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();

    int n;
    cin >> n;
    ll sum = 0;
    ll min_odd = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sum += a;
        if (a % 2 != 0)
            min_odd = min(min_odd, a);
    }
    if (sum % 2 == 0)
        cout << sum << endl;
    else
        cout << sum - min_odd << endl;

    return 0;
}