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
        vector<string> arr(n);
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]] = true;
        }

        for (int i = 0; i < n; i++)
        {
            string curr = arr[i];
            bool ok = false;
            for (int j = 1; j < curr.size(); j++)
            {
                string pref = curr.substr(0, j);
                string suff = curr.substr(j, curr.size() - 1);
                if (mp[pref] && mp[suff])
                    ok = true;
            }
            cout << ok;
        }
        cout << endl;
        // break;
    }
    return 0;
}