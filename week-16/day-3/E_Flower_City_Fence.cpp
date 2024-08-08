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
    Vint arr(n + 1);
    forei(i, 1, n)
    {
        cin >> arr[i];
    }
    auto find = [=](int x)
    {
        int l = 0, r = n;
        while (r > l)
        {
            int mid = l + r + 1 >> 1;
            if (arr[mid] >= x)
                l = mid;
            else
                r = mid - 1;
        }
        return l;
    };
    bool flag = true;
    forei(i, 1, n)
    {
        if (arr[i] > find(i))
        {
            flag = false;
            break;
        }
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
