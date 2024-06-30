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

void Muttaqin()
{
    ll k, n;
    cin >> k >> n;
    Vlong arr1(n), arr2(n);
    fori(i, 0, n)
    {
        cin >> arr1[i];
    }
    fori(i, 0, n)
    {
        cin >> arr2[i];
    }
    auto check = [&](ll mid)
    {
        ll x = 0;
        fori(i, 0, n)
        {
            ll f = (mid - 1) / arr2[i];
            f++;
            x += (f * arr1[i]);
            if (x >= k)
                break;
        }
        return x >= k;
    };
    ll l = 1, r = 1e12, ans = r;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid))
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
            l = mid + 1;
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
