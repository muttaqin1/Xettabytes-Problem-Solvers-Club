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
        string a, b;
        cin >> a >> b;
        int res = 0;
        fori(i, 0, a.size())
        {
            fori(j, 0, b.size())
            {
                int m = i, n = j, c = 0;
                while (a[m] == b[n] && n < b.size())
                {
                    m++;
                    n++;
                    c++;
                }
                res = max(res, c);
            }
        }
        cout << (a.size() + b.size()) - res * 2 << endl;
    }
    return 0;
}