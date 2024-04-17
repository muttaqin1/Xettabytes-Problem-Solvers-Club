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
        int k = 0;
        while ((1 << (k + 1)) <= n - 1)
        {
            k++;
        }
        fored(i, ((1 << k) - 1), 0)
        {
            cout << i << " ";
        }
        fori(i, (1 << k), n)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}