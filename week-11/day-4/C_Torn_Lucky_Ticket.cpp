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

const int N = 2e5 + 10;
ll cnt[6][50];
ll sum[N][50];
void Muttaqin()
{
    int n;
    cin >> n;
    forei(i, 1, n)
    {
        string str;
        cin >> str;
        ll s = str.size();
        str = " " + str;

        forei(j, 1, s)
        {
            sum[i][j] = sum[i][j - 1] + str[j] - '0';
        }
        cnt[s][sum[i][s]]++;
        sum[i][0] = s;
    }

    ll res = 0;

    forei(i, 1, n)
    {
        ll a = sum[i][0];
        ll b = cnt[a][sum[i][a]];
        res += b;

        fori(j, 1, a)
        {
            if ((j * 2) <= a)
            {
                continue;
            }
            int x = sum[i][j];
            int y = sum[i][a] - x;
            res += cnt[2 * j - a][2 * sum[i][j] - sum[i][a]];
            res += cnt[2 * j - a][2 * (sum[i][a] - sum[i][a - j]) - sum[i][a]];
        }
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
