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
        int n, k;
        cin >> n >> k;
        vector<int> arr(k);
        fori(i, 0, k) cin >> arr[i];
        sort(arr.rbegin(), arr.rend());
        int cnt = 0;
        int ct = 0;
        fori(i, 0, k)
        {
            int curr = arr[i];
            int dis = n - arr[i];
            if (ct < curr)
            {
                cnt++;
                ct += dis;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}