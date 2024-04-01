#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;
map<pair<int, vector<bool>>, ll> mp;
ll solve(int n, bool s, bool m, bool b, vector<ll> &skiing, vector<ll> &movie, vector<ll> &board_game)
{
    if (n == 0)
    {
        if (!s && !m && !b)
            return 0;
        else
            return LONG_MIN;
    }
    if (mp.find({n, {s, m, b}}) != mp.end())
        return mp[{n, {s, m, b}}];
    ll aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0;
    if (s)
    {
        aux1 = solve(n - 1, false, m, b, skiing, movie, board_game) + skiing[n - 1];
    }
    if (m)
    {
        aux2 = solve(n - 1, s, false, b, skiing, movie, board_game) + movie[n - 1];
    }
    if (b)
    {
        aux3 = solve(n - 1, s, m, false, skiing, movie, board_game) + board_game[n - 1];
    }
    aux4 = solve(n - 1, s, m, b, skiing, movie, board_game);
    return mp[{n, {s, m, b}}] = max(max(aux1, aux2), max(aux3, aux4));
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        mp.clear();
        int n;
        cin >> n;
        vector<ll> skiing(n);
        vector<ll> movie(n);
        vector<ll> board_game(n);
        for (int i = 0; i < n; i++)
        {
            cin >> skiing[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> movie[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> board_game[i];
        }
        cout << solve(n, true, true, true, skiing, movie, board_game) << endl;
    }
    return 0;
}