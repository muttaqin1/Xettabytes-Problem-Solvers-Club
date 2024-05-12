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
    int n;
    cin >> n;
    vector<int> arr;
    if (n % 2 == 0)
    {
        int x = 0;
        while (x != n)
        {
            arr.push_back(2);
            x += 2;
        }
    }
    else
    {
        int x = 0;
        while (x != n - 1)
        {
            arr.push_back(2);
            x += 2;
        }
        arr.back()++;
    }
    cout << arr.size() << endl;
    for (auto v : arr)
        cout << v << " ";
    cout << endl;
    return 0;
}