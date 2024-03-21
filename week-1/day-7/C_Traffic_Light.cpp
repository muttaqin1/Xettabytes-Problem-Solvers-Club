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
        char ch;
        cin >> n >> ch;
        string str;
        cin >> str;

        set<int> green_signals;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'g')
                green_signals.insert(i + 1);
        }
        int ans = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == ch)
            {
                auto ub = green_signals.lower_bound(i + 1);
                if (ub != green_signals.end())
                {
                    ans = max(ans, *ub - (i + 1));
                }
                else
                {
                    int x = n - (i + 1);
                    int y = *green_signals.begin();
                    ans = max(ans, x + y);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}