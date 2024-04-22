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
    int n;
    cin >> n;
    vector<int> boys(n);
    fori(i, 0, n) cin >> boys[i];
    int m;
    cin >> m;
    vector<int> girls(m);
    fori(i, 0, m) cin >> girls[i];
    sort(girls.begin(), girls.end());
    sort(boys.begin(), boys.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            if (abs(boys[i] - girls[j]) <= 1)
            {
                girls[j] = 105;
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}