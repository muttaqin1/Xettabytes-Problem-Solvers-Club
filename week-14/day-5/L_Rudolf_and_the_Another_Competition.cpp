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
    int n, m, h;
    cin >> n >> m >> h;
    vector<Vint> t(n, Vint(m));
    fori(i, 0, n)
    {
        fori(j, 0, m)
        {
            cin >> t[i][j];
        }
    }

    vector<pair<ll, ll>> p;
    for (auto &e : t)
        sort(full(e));

    fori(i, 1, n)
    {
        ll tot = 0, c = 0, sum = 0;
        for (auto e : t[i])
        {
            sum += e;
            if (sum > h)
                break;
            tot += sum;
            c--;
        }

        p.push_back({c, tot});
    }
    ll tot = 0, c = 0, sum = 0;
    for (auto e : t[0])
    {
        sum += e;
        if (sum > h)
            break;
        tot += sum;
        c--;
    }
    sort(full(p));
    while (p.size() && (p.back() >= make_pair(c, tot)))
        p.pop_back();
    cout << p.size() + 1 << endl;
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
