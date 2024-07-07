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
    vector<map<int, int>> res;
    [&]
    {
        fori(i, 0, 10)
        {
            fori(j, 0, 10)
            {
                fori(k, 0, 10)
                {
                    if ((i + j + k) % 10 == 3)
                    {
                        map<int, int> aux;
                        aux[i]++, aux[j]++, aux[k]++;
                        res.push_back(aux);
                    }
                }
            }
        }
        return NULL;
    }();

    int n;
    cin >> n;
    map<int, int> mp;
    fori(i, 0, n)
    {
        int x;
        cin >> x;
        mp[x % 10]++;
    }

    for (auto it : res)
    {
        bool flag = false;
        for (auto [x, y] : it)
        {
            if (mp[x] < y)
                flag = true;
        }
        if (flag == 0)
        {
            yes;
            return;
        }
    }
    no;
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
