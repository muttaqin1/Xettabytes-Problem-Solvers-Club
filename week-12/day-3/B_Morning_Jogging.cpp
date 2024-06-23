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

multiset<pair<ll, ll>> st;
vector<Vlong> arr(101, Vlong(101));
void Muttaqin()
{
    st.clear();
    ll n, m;
    cin >> n >> m;
    fori(i, 0, n)
    {
        fori(j, 0, m)
        {
            arr[i][j] = -1;
            ll x;
            cin >> x;
            st.insert({x, i});
        }
    }

    fori(i, 0, m)
    {
        auto it = st.begin();
        arr[it->second][i] = it->first;
        st.erase(it);
    }

    while (!st.empty())
    {
        auto it = st.begin();
        int idx = 0;
        while (arr[it->second][idx] != -1)
        {
            idx++;
        }
        arr[it->second][idx] = it->first;
        st.erase(it);
    }
    fori(i, 0, n)
    {
        fori(j, 0, m)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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
