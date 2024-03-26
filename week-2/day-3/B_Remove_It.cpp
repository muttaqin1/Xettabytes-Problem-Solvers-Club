#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();
    int n, a;
    cin >> n >> a;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != a)
            arr.push_back(x);
    }
    for (auto v : arr)
        cout << v << " ";
    cout << endl;
    return 0;
}