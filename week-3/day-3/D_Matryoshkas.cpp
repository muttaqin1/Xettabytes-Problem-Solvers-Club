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
        multiset<ll> st;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            st.insert(a);
        }
        int cnt = 0;
        while (!st.empty())
        {
            cnt++;
            ll x = *st.begin();
            st.erase(st.begin());
            while (st.upper_bound(x) != st.end() && x + 1 == *st.upper_bound(x))
            {
                x = *st.upper_bound(x);
                st.erase(st.find(x));
            }
        }
        cout << cnt << endl;
    }
    return 0;
}