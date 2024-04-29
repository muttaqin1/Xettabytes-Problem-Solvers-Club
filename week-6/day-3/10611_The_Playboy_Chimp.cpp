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
    vector<int> arr(n);
    fori(i, 0, n) cin >> arr[i];
    int q;
    cin >> q;
    while (q--)
    {
        int f;
        cin >> f;
        int l = -1, r = -1;
        int x = 0, y = n - 1;
        while (x <= y)
        {
            int mid = x + (y - x) / 2;
            if (arr[mid] >= f)
            {
                y = mid - 1;
            }
            else
            {
                l = mid;
                x = mid + 1;
            }
        }
        x = 0, y = n - 1;
        while (x <= y)
        {
            int mid = x + (y - x) / 2;
            if (arr[mid] <= f)
            {
                x = mid + 1;
            }
            else
            {
                r = mid;
                y = mid - 1;
            }
        }
        if (l != -1)
            cout << arr[l] << " ";
        else
            cout << 'X' << " ";
        if (r != -1)
            cout << arr[r];
        else
            cout << 'X';
        cout << endl;
    }
    return 0;
}