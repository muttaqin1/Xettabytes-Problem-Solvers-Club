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
        int a, b, n, t_c;
        cin >> a >> b >> n >> t_c;
        int x = t_c / n;
        int y = t_c % n;
        if (x <= a)
        {
            if (y <= b)
                cout << "YES";
            else
                cout << "NO";
        }
        else
        {
            if ((((x - a) * n) + y) <= b)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }

    return 0;
}