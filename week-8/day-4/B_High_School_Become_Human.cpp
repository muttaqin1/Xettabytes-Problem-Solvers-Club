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
    long double x, y;
    cin >> x >> y;
    long double a = y * log(x), b = x * log(y);
    if (a > b)
    {
        cout << '>';
    }
    else if (a < b)
    {
        cout << '<';
    }
    else
        cout << '=';
    return 0;
}