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
        vector<ll> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            ll curr = arr[i];
            bool fg = false;
            for (int j = i + 1; j >= 2; j--)
            {
                if (curr % j)
                {
                    fg = true;
                    break;
                }
            }
            if (!fg)
                flag = false;
        }
        if (flag)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}