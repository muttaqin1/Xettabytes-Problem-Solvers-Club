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
    int n, q;
    int c = 1;
    while (true)
    {
        cin >> n >> q;
        if (!n && !q)
            break;
        vector<int> arr(n);
        fori(i, 0, n) cin >> arr[i];
        sort(arr.begin(), arr.end());
        cout << "CASE# " << c++ << ":" << endl;
        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(arr.begin(), arr.end(), x);
            if (it != arr.end())
            {
                if (*it == x)
                {
                    cout << x << " found at " << (it - arr.begin()) + 1;
                }
                else
                {
                    cout << x << " not found";
                }
            }
            else
            {
                cout << x << " not found";
            }
            cout << endl;
        }
    }
    return 0;
}