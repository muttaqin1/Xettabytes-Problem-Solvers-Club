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
        vector<ll> arr(n);
        vector<ll> aux;
        map<ll, int> mp;
        fori(i, 0, n)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        fori(i, 0, n)
        {
            ll x = (log2(arr[i]) + 1);
            mp[x]++;
            aux.push_back(x);
        }
        sort(aux.begin(), aux.end());
        cout << (mp[aux.back()] + 1) / 2 << endl;
    }
    return 0;
}