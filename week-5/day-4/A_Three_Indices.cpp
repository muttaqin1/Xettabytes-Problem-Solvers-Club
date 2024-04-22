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
        fori(i, 0, n) cin >> arr[i];
        vector<int> prefix_left(n, -1);
        vector<int> prefix_right(n, -1);
        int mn = 0;
        fori(i, 1, n - 1)
        {
            if (arr[mn] < arr[i])
            {
                prefix_left[i] = mn;
            }
            else
            {
                mn = i;
            }
        }
        mn = n - 1;
        ford(i, n - 2, 0)
        {
            if (arr[mn] < arr[i])
            {
                prefix_right[i] = mn;
            }
            else
            {
                mn = i;
            }
        }
        bool flag = false;
        fori(i, 1, n - 1)
        {
            if (prefix_left[i] != -1 && prefix_right[i] != -1)
            {
                flag = true;
                cout << "YES" << endl;
                cout << prefix_left[i] + 1 << " " << i + 1 << " " << prefix_right[i] + 1 << endl;
                break;
            }
        }
        if (!flag)
            cout << "NO" << endl;
    }

    return 0;
}