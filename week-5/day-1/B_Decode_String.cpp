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
        string str;
        cin >> str;
        int i = 0;
        while (i < (n - 2))
        {
            int x = str[i + 2];
            if (((x == '0') && (((i + 3) >= n) || (str[i + 3] != '0'))))
            {
                int p = str[i] - '0';
                int q = str[i + 1] - '0';
                int m = (p * 10) + q;
                char c = 'a';
                m--;
                c += m;
                cout << c;
                i += 3;
            }
            else
            {
                int y = str[i] - '0';
                char c = 'a';
                y--;
                c += y;
                cout << c;
                i++;
            }
        }

        fori(l, i, n)
        {
            int y = str[l] - '0';
            char c = 'a';
            y--;
            c += y;
            cout << c;
        }
        cout << endl;
    }
    return 0;
}