#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();

    ll a, b;
    cin >> a >> b;

    ll x = a;
    ll cnt = 0;
    while (x <= b)
    {
        cnt++;
        x *= 2;
    }
    cout << cnt << endl;
    return 0;
}