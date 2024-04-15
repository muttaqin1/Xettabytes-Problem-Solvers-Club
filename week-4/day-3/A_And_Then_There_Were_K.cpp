#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
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
        int idx = 0;
        forei(i, 0, 31)
        {
            if ((n & (1 << i)))
            {
                idx = i;
            }
        }
        int x = 0;
        fori(i, 0, idx)
        {
            x = (x | 1 << i);
        }
        cout << x << endl;
    }
    return 0;
}