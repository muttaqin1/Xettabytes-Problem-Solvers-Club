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

ll solve(Vlong &arr, ll i, ll flag, vector<vector<ll>> &memo)
{

    if (i >= arr.size())
        return 0;
    if (memo[i][flag] != -1)
        return memo[i][flag];

    ll ans = 0;
    if (flag)
    {
        ll a = solve(arr, i + 1, 1, memo) + arr[i];
        ll b = solve(arr, i + 1, 0, memo);
        ll c = solve(arr, i + 2, 1, memo) + arr[i];
        ans = max({a, b, c});
    }
    else
    {
        ll a = solve(arr, i + 1, 1, memo);
        ll b = solve(arr, i + 1, 0, memo);
        ans = max(a, b);
    }
    return memo[i][flag] = ans;
}
void Muttaqin()
{
    ll n;
    cin >> n;
    Vlong arr(n);
    fori(i, 0, n) cin >> arr[i];
    vector<vector<ll>> memo(n + 1, vector<ll>(2, -1));
    cout << solve(arr, 0, 1, memo) << endl;
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
