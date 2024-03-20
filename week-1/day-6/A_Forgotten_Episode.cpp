#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();

    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }
    cout << ((n * (n + 1)) / 2) - sum << endl;

    return 0;
}