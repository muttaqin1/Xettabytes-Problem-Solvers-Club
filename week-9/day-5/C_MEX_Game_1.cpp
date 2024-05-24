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
    int n;
    cin >> n;
    vector<int> arr(n), freq(n + 5);
    fori(i, 0, n)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    bool flag = false;
    int ans;
    fori(i, 0, n + 5)
    {
        if (freq[i] == 0)
        {
            ans = i;
            break;
        }
        else if (freq[i] == 1)
        {
            if (flag)
            {
                ans = i;
                break;
            }
            flag = true;
        }
    }
    cout << ans << endl;
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
