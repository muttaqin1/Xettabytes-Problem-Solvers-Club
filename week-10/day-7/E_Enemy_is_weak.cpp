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
using pbds = tree<T, null_type, conditional_t<U, less<T>, greater<T>>, rb_tree_tag, tree_order_statistics_node_update>;

void Muttaqin()
{
    pbds<ll, false> p1;
    pbds<ll, true> p2;
    int n;
    cin >> n;
    Vlong arr(n), aux(n);
    fori(i, 0, n)
    {
        cin >> arr[i];
        p1.insert(arr[i]);
        aux[i] = p1.order_of_key(arr[i]);
    }
    ll res = 0;
    fored(i, n - 1, 0)
    {
        p2.insert(arr[i]);
        res += (p2.order_of_key(arr[i]) * aux[i]);
    }
    cout << res << endl;
}

int main()
{
    fastread();
    //    int t;
    //    cin >> t;
    //    while (t--)
    //   {
    Muttaqin();
    //    }
    return 0;
}
