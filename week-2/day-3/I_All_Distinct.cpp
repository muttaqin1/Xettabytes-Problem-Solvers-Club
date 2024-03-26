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
        int n;
        cin >> n;
        vector<bool> freq(1e4 + 5, false);
        vector<int> arr(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (freq[arr[i]])
                cnt++;
            else
                freq[arr[i]] = true;
        }
        if (cnt % 2 == 0)
            cout << n - cnt << endl;
        else
            cout << n - (cnt + 1) << endl;
    }
    return 0;
}