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
    int n, x;
    cin >> n >> x;
    Vlong arr(n);
    fori(i, 0, n) cin >> arr[i];
    int l = 0, r = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += arr[r];
        if (sum == x)
        {
            ans++;
        }
        else if (sum > x)
        {
            while (sum > x && l < n)
            {

                sum -= arr[l];
                l++;
            }
            if (sum == x)
                ans++;
        }
        r++;
    }
    cout << ans << endl;
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
