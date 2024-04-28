#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

string convert_bin(int n)
{
    string ans;

    fored(i, 64, 0)
    {
        int k = n >> i;

        if (k & 1)
            ans += '1';
        else
            ans += '0';
    }

    return ans;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        fori(i, 0, n) cin >> arr[i];

        vector<int> m(64);
        int g = 0;
        fori(i, 0, n)
        {
            string s = convert_bin(arr[i]);
            fori(j, 0, 64)
            {
                if (s[j] != '0')
                    m[j]++;
            }
        }
        fori(i, 0, 64)
            g = __gcd(g, m[i]);
        forei(i, 1, n)
        {
            if (g % i == 0)
                cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}