#include <bits/stdc++.h>
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
template <typename T, bool U = false>
using Pq = std::priority_queue<T, std::vector<T>, std::conditional_t<U, greater<T>, less<T>>>;

void Muttaqin()
{
    ll x, y;
    cin >> x >> y;
    if (x < y)
    {
        if (y % 2 == 0)
        {
            ll f = (y - 1) * (y - 1) + 1;
            cout << f + x - 1 << endl;
        }
        else
        {
            ll f = y * y;
            cout << f - x + 1 << endl;
        }
    }
    else
    {
        if (x % 2 == 0)
        {
            ll f = x * x;
            cout << f - y + 1 << endl;
        }
        else
        {
            ll f = (x - 1) * (x - 1) + 1;
            cout << f + y - 1 << endl;
        }
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
