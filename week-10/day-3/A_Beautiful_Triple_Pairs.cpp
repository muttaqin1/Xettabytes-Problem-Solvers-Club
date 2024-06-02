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
    int n;
    cin >> n;
    Vlong arr(n);
    fori(i, 0, n) cin >> arr[i];
    map<tuple<ll, ll, ll>, ll> aux;
    map<pair<ll, ll>, ll> aux1, aux2, aux3;
    fori(i, 2, n)
    {
        aux[{arr[i], arr[i - 1], arr[i - 2]}]++;
        aux1[{arr[i - 1], arr[i - 2]}]++;
        aux2[{arr[i], arr[i - 2]}]++;
        aux3[{arr[i], arr[i - 1]}]++;
    }
    ll ans = 0;

    fori(i, 2, n)
    {
        ll tmp = aux1[{arr[i - 1], arr[i - 2]}] + aux2[{arr[i], arr[i - 2]}] + aux3[{arr[i], arr[i - 1]}];
        ans += (tmp - 3 * aux[{arr[i], arr[i - 1], arr[i - 2]}]);
    }
    cout << (ans / 2) << endl;
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
