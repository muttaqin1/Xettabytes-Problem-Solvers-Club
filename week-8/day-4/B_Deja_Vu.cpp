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
        ll n, q;
        cin >> n >> q;
        vector<ll> arr_n(n), arr_q(q), arr;
        fori(i, 0, n) cin >> arr_n[i];
        fori(i, 0, q) cin >> arr_q[i];
        fori(i, 0, q)
        {
            if (arr.size() == 0 || arr.back() > arr_q[i])
                arr.push_back(arr_q[i]);
        }
        for (auto v : arr)
        {
            int p = pow(2, v), add = pow(2, v - 1);
            for (auto &v1 : arr_n)
            {
                if (v1 % p == 0)
                {
                    v1 += add;
                }
            }
        }
        for (auto v : arr_n)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}