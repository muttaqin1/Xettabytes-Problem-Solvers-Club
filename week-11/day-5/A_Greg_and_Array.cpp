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
const int N = 1e5 + 10;

void Muttaqin()
{
    int n, m, k;
    cin >> n >> m >> k;
    Vlong arr(n + 1), l(m + 1), r(m + 1), val(m + 1), diff(N);
    forei(i, 1, n)
    {
        cin >> arr[i];
    }
    forei(i, 1, m)
    {
        cin >> l[i] >> r[i] >> val[i];
    }
    forei(i, 1, k)
    {
        int l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r + 1] -= 1;
    }

    Vlong prefix_sum(m + 1);
    forei(i, 1, m)
    {
        prefix_sum[i] = prefix_sum[i - 1] + diff[i];
    }

    Vlong new_dif(N), new_pre(N);
    forei(i, 1, m)
    {
        new_dif[l[i]] += (val[i] * prefix_sum[i]);
        new_dif[r[i] + 1] -= (val[i] * prefix_sum[i]);
    }
    forei(i, 1, n)
    {
        new_pre[i] = new_pre[i - 1] + new_dif[i];
    }
    forei(i, 1, n)
    {
        cout << arr[i] + new_pre[i] << ' ';
    }
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
