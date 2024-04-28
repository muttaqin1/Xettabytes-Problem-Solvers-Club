#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

const int maxN = 1e4;

int main()
{
    fastread();
    vector<ll> pw;
    forei(i, 1, maxN)
    {
        pw.push_back(pow(i, 3));
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        bool flag = false;
        fori(i, 0, pw.size())
        {
            if (pw[i] >= x)
            {
                break;
            }
            ll need = x - pw[i];
            auto it = upper_bound(pw.begin(), pw.end(), need);
            it--;
            if (*it == need)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}