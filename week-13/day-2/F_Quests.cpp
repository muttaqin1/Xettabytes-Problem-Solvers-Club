#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
typedef long long int ll;
#define Vlong std::vector<long long>
#define Vint std::vector<int>
#define Vchar std::vector<char>
#define Vstring std::vector<string>
#define Sint std::set<int>
#define Slong std::set<long long int>
#define full(x) (x).begin(), (x).end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
using namespace __gnu_pbds;
template <typename T, bool U = false>
using Pq = std::priority_queue<T, std::vector<T>, std::conditional_t<U, greater<T>, less<T>>>;
template <typename T, bool U = true>
using pbds = tree<T, null_type, conditional_t<U, less<T>, less_equal<T>>, rb_tree_tag, tree_order_statistics_node_update>;
const ll N = 2e5 + 5;
const ll mod = 1e9 + 7;
ll a[N];
ll sum[N];
ll n, c, d;

ll check(ll k)
{
    k++;
    ll p = d / k;
    ll q = min(d % k, n);
    ll total = p * sum[min(k, n)] + sum[q];
    return total >= c;
}

void Muttaqin()
{
    cin >> n >> c >> d;
    forei(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, greater<ll>());
    forei(i, 1, n)
    {
        sum[i] = sum[i - 1] + a[i];
    }
    if (d * a[1] < c)
    {
        cout << "Impossible" << endl;
        return;
    }
    ll mx = min(d, n);
    if (sum[mx] >= c)
    {
        cout << "Infinity" << endl;
        return;
    }
    ll l = 0, r = d, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {

            r = mid - 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        Muttaqin();
    }
    return 0;
}
