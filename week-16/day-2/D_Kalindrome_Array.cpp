#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

void solve()
{
    int n;
    bool ok = true;
    cin >> n;
    vector<int> v(n);
    set<int> st;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < (n / 2); i++)
    {
        if (v[i] != v[n - i - 1])
        {
            st.insert(v[i]);
            st.insert(v[n - i - 1]);
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "YES" << endl;
    else
    {
        for (auto e : st)
        {
            int l = 0, r = n - 1;
            ok = true;
            while (l < r)
            {
                if (v[l] == v[r])
                    l++, r--;
                else if (v[l] == e)
                    l++;
                else if (v[r] == e)
                    r--;
                else
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
}

int main()
{
    fastread();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
