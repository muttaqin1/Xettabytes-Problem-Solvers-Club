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
    int n, q;
    cin >> n >> q;
    Vint arr(n), d(n + 1);
    fori(i, 0, n)
    {
        cin >> arr[i];
    }
    forei(i, 1, q)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        d[l]++;
        d[r + 1]--;
    }
    forei(i, 1, n)
    {
        d[i] = d[i - 1] + d[i];
    }

    sort(arr.rbegin(), arr.rend());
    sort(d.rbegin(), d.rend());

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (1LL * d[i] * arr[i]);
    }
    cout << ans << endl;
}

int main()
{
    fastread();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    Muttaqin();
    // }
    return 0;
}
