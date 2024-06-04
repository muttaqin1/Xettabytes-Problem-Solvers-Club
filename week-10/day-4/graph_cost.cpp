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
    int n;
    cin >> n;
    Vint arr(n);
    fori(i, 0, n) cin >> arr[i];
    stack<int> val, ind;
    ll total_cost = 0;
    fori(i, 0, n)
    {
        while (val.size() > 1 && val.top() > arr[i])
        {
            int curr = val.top();
            val.pop();
            if (curr >= val.top())
            {
                ind.pop();
            }
            else
            {
                val.push(curr);
                break;
            }
            val.push(arr[i]);
            ind.push(i);
        }
        int last_item = val.top();
        val.pop();
        int last_index = ind.top();
        ind.pop();
        while (!ind.empty())
        {
            total_cost += max(last_item, val.top()) * (last_index - ind.top());
            last_item = val.top();
            val.pop();
            last_index = ind.top();
            ind.pop();
        }
        cout << total_cost << endl;
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
