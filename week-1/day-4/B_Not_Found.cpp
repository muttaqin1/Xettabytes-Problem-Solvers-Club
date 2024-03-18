#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();

    string str;
    cin >> str;
    vector<int> freq(26, 0);
    for (auto v : str)
    {
        freq[v - 'a']++;
    }
    bool flag = false;
    for (char i = 'a'; i <= 'z'; i += 1)
    {
        if (freq[i - 'a'] == 0)
        {
            flag = true;
            cout << i << endl;
            break;
        }
    }
    if (!flag)
        cout << "None" << endl;

    return 0;
}