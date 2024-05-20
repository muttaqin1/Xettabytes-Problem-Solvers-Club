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
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> arr(n);
    fori(i, 0, n)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    fori(i, 0, n - 2)
    {
        ll j = i + 1, k = n - 1;
        while (j < k)
        {
            ll curr_sum = arr[i].first + arr[j].first + arr[k].first;
            if (curr_sum == x)
            {
                cout << arr[i].second << " " << arr[j].second << " " << arr[k].second << endl;
                return 0;
            }
            if (curr_sum < x)
            {
                j++;
            }
            else if (curr_sum > x)
            {
                k--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}