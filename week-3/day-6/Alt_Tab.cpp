#include <bits/stdc++.h>
#define fori(i, s, e) for (int i = s; i < e; i++)
#define ford(i, s, e) for (int i = s; i > e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();

    int n;
    cin >> n;
    vector<string> arr(n);
    fori(i, 0, n)
    {
        cin >> arr[i];
    }
    map<string, bool> mp;
    while (!arr.empty())
    {
        string str = arr.back();
        if (!mp.count(str))
        {
            mp.insert({str, true});
            cout << str[str.size() - 2] << str[str.size() - 1];
        }
        arr.pop_back();
    }
    cout << endl;

    return 0;
}