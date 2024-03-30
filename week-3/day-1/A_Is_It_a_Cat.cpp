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
        string str;
        cin >> str;
        map<char, int> mp;
        for (auto &c : str)
        {
            c = tolower(c);
            if (!mp.count(c))
            {
                mp[c] = 1;
            }
        }
        if (mp.size() != 4)
            cout << "NO" << endl;
        else
        {
            string target = "meow";
            int a = 0;
            int b = 0;
            bool flag = true;
            while (a < n)
            {
                char curr = str[a];
                char target_char = target[b];
                if (curr == target_char)
                {
                    a++;
                }
                else
                {

                    if (str[a] == target[b + 1])
                        b++;
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag && b == 3)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
    }
    return 0;
}