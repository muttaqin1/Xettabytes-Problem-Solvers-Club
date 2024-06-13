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
    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        no;
        return;
    }
    Vlong ans(n + 1);
    ll sum = 0;
    if ((n % 2 == 0) && (m % 2 == 0))
    {
        yes;
        forei(i, 1, n - 2)
        {
            ans[i] = 1;
            sum++;
        }
        ans[n - 1] = (m - sum) / 2;
        ans[n] = ans[n - 1];
    }
    else if ((n % 2 == 1) && (m % 2 == 0))
    {
        yes;
        forei(i, 1, n - 1)
        {
            ans[i] = 1;
            sum++;
        }
        ans[n] = (m - sum);
    }
    else if ((n % 2 == 0) && (m % 2 == 1))
    {
        no;
        return;
    }
    else if ((n % 2 == 1) && (m % 2 == 1))
    {
        yes;
        forei(i, 1, n - 1)
        {
            ans[i] = 1;
            sum++;
        }
        ans[n] = m - sum;
    }
    forei(i, 1, n)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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
