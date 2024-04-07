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
        vector<int> arr(n);
        fori(i, 0, n)
        {
            cin >> arr[i];
        }
        int XOR = 0;
        fori(i, 0, n)
        {
            XOR ^= arr[i];
        }
        if (XOR == 0)
            cout << 0 << endl;
        else
        {
            if (n % 2 == 1)
            {
                cout << XOR;
            }
            else
                cout << -1;
            cout << endl;
        }
    }
    return 0;
}