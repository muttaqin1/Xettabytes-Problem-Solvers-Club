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

void dfs(int i, int cnt, int &ans, Vint &l, Vint &r, string &str)
{
    if (l[i] == 0 && r[i] == 0)
        ans = min(cnt, ans);
    if (l[i] != 0)
        if (str[i - 1] != 'L')
            dfs(l[i], cnt + 1, ans, l, r, str);
        else
            dfs(l[i], cnt, ans, l, r, str);
    if (r[i] != 0)
        if (str[i - 1] != 'R')
            dfs(r[i], cnt + 1, ans, l, r, str);
        else
            dfs(r[i], cnt, ans, l, r, str);
}
void Muttaqin()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    Vint l(n + 5), r(n + 5);
    forei(i, 1, n)
    {
        cin >> l[i] >> r[i];
    }
    int ans = INT_MAX;
    dfs(1, 0, ans, l, r, s);
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
