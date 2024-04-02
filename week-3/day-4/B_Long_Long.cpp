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
        ll sum = 0;
        bool flag = true;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            sum += abs(a);
            if (a > 0)
                flag = true;
            else if (a < 0 && flag)
            {
                cnt++;
                flag = false;
            }
        }
        cout << sum << " " << cnt << endl;
    }
    return 0;
}