#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;
const int N = 1e6 + 5;
vector<int> adj[N];
vector<ll> leaf;

void dfs(int cur, int par)
{
    bool child = false;
    for (auto x : adj[cur])
    {
        if (x != par)
        {
            child = true;
            dfs(x, cur);
            leaf[cur] += leaf[x];
        }
    }
    if (!child)
    {
        leaf[cur] = 1;
    }
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
        for (int i = 0; i <= n; i++)
        {
            adj[i].clear();
        }
        leaf.assign(n + 2, 0);
        for (int i = 1; i <= n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(1, -1);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            ll mul = leaf[x] * leaf[y];
            cout << mul << endl;
        }
    }
    return 0;
}