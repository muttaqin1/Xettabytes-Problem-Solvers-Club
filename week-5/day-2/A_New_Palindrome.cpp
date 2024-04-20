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
        string str;
        cin >> str;
        map<char, int> mp;
        bool odd = false;
        for (auto v : str)
        {

            mp[v]++;
        }
        for (auto v : mp)
        {
            if ((v.second % 2) == 1)
            {
                odd = true;
                break;
            }
        }
        int n = str.size();
        if (!odd)
        {
            if (mp.size() >= 2)
                cout << "YES";
            else
                cout << "NO";
        }
        else
        {

            if (mp.size() > 2)
                cout << "YES";
            else if (mp.size() == 2)
            {
                bool flag = true;
                for (auto v : mp)
                {
                    if (v.second < 2)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    cout << "YES";
                else
                    cout << "NO";
            }
            else
                cout << "NO";
        }
        cout << endl;
    }
    return 0;
}