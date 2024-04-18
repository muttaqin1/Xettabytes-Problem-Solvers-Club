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
        int count = 0;
        int a = 1;
        while (a * 2 <= n)
        {
            a *= 2;
            count++;
        }
        bool flag = false;
        int ans = 1;
        fored(i, count - 1, 0)
        {
            if (n & (1 << i))
                flag = true;
            else
            {
                if (flag)
                {
                    ans *= 2;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}