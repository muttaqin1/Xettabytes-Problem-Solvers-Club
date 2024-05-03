#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

class Asst
{
public:
    int t, z, y;
    Asst() = default;
    Asst(int t, int z, int y)
    {
        this->t = t;
        this->z = z;
        this->y = y;
    }
};

bool ok(int time, int m, int n, vector<Asst> &a, vector<int> &assistans)
{
    vector<int> may(n, 0);
    int has = m;
    fori(i, 0, n)
    {
        int aux;
        Asst v = a[i];
        int x = v.t * v.z + v.y;
        int c = (time / x) * v.z;
        int rem = time % x;
        aux = c + min(v.z, (rem / v.t));
        int curr = min(has, aux);
        has -= curr;
        may[i] = curr;
    }
    if (!has)
    {
        for (int i = 0; i < n; i++)
        {
            assistans[i] = may[i];
        }
    }
    return (!has);
}
int main()
{
    fastread();
    int m, n;
    cin >> m >> n;
    vector<Asst> arr;
    fori(i, 0, n)
    {
        Asst x;
        cin >> x.t >> x.z >> x.y;
        arr.push_back(x);
    }
    vector<int> assistants(n, 0);
    int l = 0, r = 1e8, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid, m, n, arr, assistants))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    for (auto v : assistants)
        cout << v << " ";
    cout << endl;
    return 0;
}