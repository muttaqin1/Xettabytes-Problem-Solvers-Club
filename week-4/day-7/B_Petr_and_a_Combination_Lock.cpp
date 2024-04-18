#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int solve(int n, int s, vector<int> &arr)
{
    if (n == 0)
        return ((s % 360) == 0 ? true : false);
    return solve(n - 1, s + arr[n - 1], arr) || solve(n - 1, s - arr[n - 1], arr);
}

int main()
{
    fastread();
    int n;
    cin >> n;
    vector<int> arr(n);
    fori(i, 0, n)
    {
        cin >> arr[i];
    }
    if (solve(n, 0, arr))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}