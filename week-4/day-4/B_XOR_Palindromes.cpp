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
        string str;
        cin >> n >> str;
        int i = 0, j = n - 1, cp = 0, wp = 0;
        bool odd = (n % 2) != 0 ? true : false;
        while (i < j)
        {
            if (str[i] == str[j])
                cp++;
            else
                wp++;
            i++;
            j--;
        }
        // cout << cp << " " << wp << endl;
        forei(i, 0, n)
        {
            if (i < wp)
                cout << 0;
            else if (i == wp)
                cout << 1;
            else
            {
                int x = i - wp;
                if ((x % 2) == 0)
                {
                    int temp = x / 2;
                    if (temp <= cp)
                        cout << 1;
                    else
                        cout << 0;
                }
                else
                {
                    if (odd)
                    {
                        int temp = x / 2;
                        if (temp <= cp)
                            cout << 1;
                        else
                            cout << 0;
                    }
                    else
                        cout << 0;
                }
            }
        }
        cout << endl;
    }
    return 0;
}