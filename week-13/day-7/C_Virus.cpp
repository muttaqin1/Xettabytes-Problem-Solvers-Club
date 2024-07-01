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
    ll n, m;
    cin >> n >> m;
    Vlong arr(m), aux;
    fori(i, 0, m)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    fori(i, 0, m)
    {
        ll x = n - arr[i] + arr[(i + 1) % m] - 1;
        if (i == m - 1)
            aux.push_back(x);
        else if (x > 0)
            aux.push_back(arr[i + 1] - arr[i] - 1);
    }
    sort(aux.rbegin(), aux.rend());
    ll hs = n, hl = 0, sv = 0;
    fori(i, 0, aux.size())
    {
        ll s = aux[i] - 2 * hl;
        if (s > 2)
        {
            sv += s - 1;
            hl += 2;
        }
        else
        {
            if (s == 1)
            {
                sv++;
                hl += 1;
            }
            else if (s == 2)
            {
                sv++;
                hl += 1;
            }
        }
    }
    cout << hs - sv << endl;
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
