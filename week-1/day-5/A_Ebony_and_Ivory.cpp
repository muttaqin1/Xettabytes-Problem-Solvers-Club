#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;
const int N = 1e4 + 2;
int dp[N];
int solve(int a, int b, int c)
{
    if (c == 0)
        return true;
    else if (c < 0)
        return false;
    else if (dp[c] != -1)
        return dp[c];
    else
        return dp[c] = solve(a, b, c - a) || solve(a, b, c - b);
}

int main()
{
    fastread();
    memset(dp, -1, sizeof(dp));

    int a, b, c;
    cin >> a >> b >> c;
    if (solve(a, b, c))
        cout
            << "Yes";
    else
        cout << "No";
    cout << endl;
    return 0;
}