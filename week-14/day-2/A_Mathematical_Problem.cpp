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
    string str;
    cin >> str;
    if (str.size() == 2)
    {
        if (str[0] == '0')
            cout << str[1];
        else
            cout << str;
        cout << endl;
        return;
    }
    ll mn = LONG_MAX;
    fori(i, 0, n - 1)
    {
        Vlong aux;
        fori(j, 0, n)
        {
            if (j == i)
                aux.push_back((str[j] - '0') * 10 + (str[j + 1] - '0')),
                    j++;
            else
                aux.push_back(str[j] - '0');
        }
        ll sum = 0;
        bool flag = false;
        for (auto v : aux)
        {
            if (v != 1)
                sum += v;
            if (v == 0)
                flag = true;
        }
        if (sum == 0)
            sum = 1;
        if (flag)
            sum = 0;

        mn = min(mn, sum);
    }
    cout << mn << endl;
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
