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
        int n_c, n_pp, t;
        cin >> n_c >> n_pp >> t;
        vector<ll> car(n_c), pp(n_pp);
        for (int i = 0; i < n_c; i++)
        {
            cin >> car[i];
        }
        for (int i = 0; i < n_pp; i++)
        {
            cin >> pp[i];
        }
        sort(car.begin(), car.end(), greater<int>());
        sort(pp.begin(), pp.end(), greater<int>());
        ll sum = 0;
        for (int i = 0; i < min(n_c, n_pp); i++)
        {
            sum += min((t * pp[i]), car[i]);
        }
        cout << sum << endl;
    }
    return 0;
}