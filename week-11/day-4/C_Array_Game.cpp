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
    ll n, k;
    cin >> n >> k;
    Vlong arr(n);
    fori(i, 0, n)
    {
        cin >> arr[i];
    }
    if (k >= 3)
    {
        cout << 0 << endl;
        return;
    }
    sort(full(arr));
    ll x = arr[0];
    fori(i, 0, n - 1)
    {
        x = min(x, arr[i + 1] - arr[i]);
    }
    if (k == 1)
    {
        cout << x << endl;
        return;
    }
    fori(i, 0, n)
    {
        fori(j, 0, i)
        {
            ll aux = arr[i] - arr[j];
            ll lb = lower_bound(begin(arr), end(arr), aux) - begin(arr);
            if (lb < n)
                x = min(x, arr[lb] - aux);
            if (lb > 0)
                x = min(x, aux - arr[lb - 1]);
        }
    }
    cout << x << endl;
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
