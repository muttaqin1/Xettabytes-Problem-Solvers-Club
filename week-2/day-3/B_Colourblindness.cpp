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
        vector<vector<char>> arr(2, vector<char>(n));
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> arr[i][k];
            }
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[0][i] != arr[1][i])
            {
                if ((arr[0][i] != 'G' && arr[0][i] != 'B') || (arr[1][i] != 'G' && arr[1][i] != 'B'))
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}