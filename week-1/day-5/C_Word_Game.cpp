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
        vector<string> a1(n), a2(n), a3(n);
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
            if (!mp.count(a1[i]))
                mp.insert({a1[i], 1});
            else
                mp[a1[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a2[i];
            if (!mp.count(a2[i]))
                mp.insert({a2[i], 1});
            else
                mp[a2[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a3[i];
            if (!mp.count(a3[i]))
                mp.insert({a3[i], 1});
            else
                mp[a3[i]]++;
        }
        int p1 = 0, p2 = 0, p3 = 0;
        for (auto v : a1)
        {
            if (mp[v] == 2)
                p1++;
            else if (mp[v] == 1)
                p1 += 3;
        }
        for (auto v : a2)
        {
            if (mp[v] == 2)
                p2++;
            else if (mp[v] == 1)
                p2 += 3;
        }
        for (auto v : a3)
        {
            if (mp[v] == 2)
                p3++;
            else if (mp[v] == 1)
                p3 += 3;
        }
        cout << p1 << " " << p2 << " " << p3 << endl;
    }
    return 0;
}