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
        map<int, int> mp;
        vector<vector<int>> perm(n, vector<int>(n - 1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> perm[i][j];
                if (j == n - 2)
                {
                    mp[perm[i][j]]++;
                }
            }
        }
        int mx_key = 0, mx_occ = 0;
        for (auto v : mp)
        {
            int key = v.first, occ = v.second;
            if (occ > mx_occ)
            {
                mx_occ = occ;
                mx_key = key;
            }
        }
        int ti = -1;
        int rs = (n * (n + 1)) / 2;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n - 1; j++)
            {
                sum += perm[i][j];
            }
            if ((rs - sum) == mx_key)
                ti = i;
        }
        for (auto v : perm[ti])
        {
            cout << v << " ";
        }
        cout << mx_key << endl;
    }

    return 0;
}