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
const int N = 5100;

ll dp[N][N];
void Muttaqin()
{
    ll n, x;
    cin >> n >> x;
    Vlong arr(n + 1), ans(n + 1);
    forei(i, 1, n)
    {
        cin >> arr[i];
    }
    forei(i, 0, n)
    {
        forei(j, 0, n)
        {
            dp[i][j] = 0;
        }
    }

    forei(i, 1, n)
    {
        forei(j, 0, i)
        {
            dp[i][j] = max(dp[i - 1][j], (ll)0) + arr[i];
            if (j >= 1)
            {
                dp[i][j] = max(dp[i][j], max(dp[i - 1][j - 1], (ll)0) + arr[i] + x);
            }
            ans[j] = max(ans[j], dp[i][j]);
        }
    }
    forei(j, 0, n)
    {
        if (j > 0)
        {
            ans[j] = max(ans[j], ans[j - 1]);
        }
        cout << ans[j] << " ";
    }
    cout << endl;
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
