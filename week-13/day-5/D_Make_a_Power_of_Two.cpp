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
    auto pw_2 = [=](int n)
    {
        if (n == 0)
            return false;
        else
            return (ceil(log2(n)) == floor(log2(n)));
    };
    ll n;
    cin >> n;
    ll ans = LONG_MAX;
    if (pw_2(n) == true)
    {
        cout << 0 << endl;
    }
    else
    {
        string str1, str2 = to_string(n);
        forei(i, 0, 60)
        {
            ll pw = (ll)pow(2, i);
            str1 = to_string(pw);
            ll c = 0, j = 0, k = 0;
            bool flag;
            while (j != str2.size() && k != str1.size())
            {
                if (str2[j] == str1[k])
                {
                    j++;
                    k++;
                    flag = true;
                }
                else
                {
                    j++;
                    c++;
                    flag = false;
                }
            }
            if (flag)
            {
                if (j == str2.size())
                {
                    k--;
                    c += str1.size() - k - 1;
                }
                else if (k == str1.size())
                {
                    j--;
                    c += str2.size() - j - 1;
                }
            }
            else
            {
                k--;
                c += str1.size() - k - 1;
            }
            if (c == 1)
            {
                ans = 1;
                break;
            }
            else
                ans = min(ans, c);
        }
        cout << ans << endl;
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
