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
        map<int, int> mp;
        int x = -1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (!mp.count(a))
            {
                mp.insert({a, i});
            }
            else
            {

                int pos = mp[a];
                if (pos > x)
                    x = pos;
                mp[a] = i;
            }
        }
        cout << x + 1 << endl;
    }
    return 0;
}