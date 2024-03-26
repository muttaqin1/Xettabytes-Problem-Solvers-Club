#include <bits/stdc++.h>
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
        int n, sz;
        cin >> n >> sz;
        vector<string> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mn = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string a = arr[i];
                string b = arr[j];
                int s = 0;
                for (int i = 0; i < sz; i++)
                {
                    s += abs(a[i] - b[i]);
                }

                mn = min(mn, s);
            }
        }

        cout << mn << endl;
    }
    return 0;
}