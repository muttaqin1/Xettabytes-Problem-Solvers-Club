#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

ll check_sum(int si, int sj, int n, int m, vector<vector<int>> &board)
{
    ll s = 0;
    // up left
    for (int i = si, j = sj; i >= 0 && j >= 0; i--, j--)
    {
        s += board[i][j];
    }
    s -= board[si][sj];
    for (int i = si, j = sj; i < n && j < m; i++, j++)
    {
        s += board[i][j];
    }
    s -= board[si][sj];

    for (int i = si, j = sj; i < n && j >= 0; i++, j--)
    {
        s += board[i][j];
    }
    s -= board[si][sj];
    for (int i = si, j = sj; i >= 0 && j < m; i--, j++)
    {
        s += board[i][j];
    }
    return s;
}

int main()
{
    fastread();

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> board(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> board[i][j];
            }
        }
        ll mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mx = max(mx, check_sum(i, j, n, m, board));
            }
        }
        cout << mx << endl;
    }
    return 0;
}
