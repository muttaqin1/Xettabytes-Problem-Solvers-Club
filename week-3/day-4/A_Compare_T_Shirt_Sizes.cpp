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
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size(), m = s2.size();
        if (s1[n - 1] == s2[m - 1])
        {
            if (s1[n - 1] == 'S')
            {
                if (n > m)
                    cout << '<';
                else if (m > n)
                    cout << '>';
                else
                    cout << '=';
                cout << endl;
            }
            else if (s1[n - 1] == 'L')
            {
                if (n > m)
                    cout << '>';
                else if (m > n)
                    cout << '<';
                else
                    cout << '=';
                cout << endl;
            }
            else
                cout << '=' << endl;
        }
        else
        {
            if (s1[n - 1] == 'S')
            {
                cout << '<' << endl;
            }
            else if (s1[n - 1] == 'M')
            {
                if (s2[m - 1] == 'S')
                    cout << '>';
                else
                    cout << '<';
                cout << endl;
            }
            else
            {
                cout << ">" << endl;
            }
        }
    }

    return 0;
}