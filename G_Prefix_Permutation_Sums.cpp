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
ll a[200005];
bool vis[200005];

void Muttaqin()
{
    int n;
    cin >> n;
    queue<ll> que;
    vector<ll> e;
    memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> a[i];
        ll tmp = a[i] - a[i - 1];
        if (tmp <= n)
        {
            if (vis[tmp] == 0)
                vis[tmp] = 1;
            else
            {
                que.push(tmp);
            }
        }
        else
        {
            que.push(tmp);
        }
    }
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            e.push_back(i);
    }
    if (que.size() == 1)
    {
        if ((e.size() == 1 && e.front() == que.front()) || e.size() == 2 && e[0] + e[1] == que.front())
        {
            flag = true;
        }
    }
    else if (que.size() == 0 && e.size() == 1)
    {
        flag = true;
    }
    if (flag)
    {
        yes;
    }
    else
    {
        no;
    }
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
        Muttaqin();
    return 0;
}
