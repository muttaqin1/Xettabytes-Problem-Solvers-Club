#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();

    int s, t;
    cin >> s >> t;
    ll cnt = 0;
    for (int m = 0; m <= s; m++)
    {
        for (int n = 0; n <= s; n++)
        {
            for (int i = 0; i <= s; i++)
            {
                if ((m + n + i) <= s && (m * n * i) <= t)
                    cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}