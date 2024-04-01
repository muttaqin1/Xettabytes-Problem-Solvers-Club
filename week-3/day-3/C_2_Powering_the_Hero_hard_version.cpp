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
        priority_queue<ll> pq;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (a == 0 && !pq.empty())
            {
                sum += pq.top();
                pq.pop();
            }
            else
            {
                pq.push(a);
            }
        }
        cout << sum << endl;
    }
    return 0;
}