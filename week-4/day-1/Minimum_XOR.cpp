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
        int Xor = 0;
        fori(i, 0, n)
        {
            cin >> arr[i];
            Xor ^= arr[i];
        }
        int mn = Xor;
        fori(i, 0, n)
        {
            mn = min(mn, (Xor ^ arr[i]));
        }
        cout << mn << endl;
    }
    return 0;
}