#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

template <typename T>
vector<T> sieve(T n)
{
    vector<bool> prime(n + 1, true);
    for (T i = 2; i * i <= n; i++)
        if (prime[i])
            for (T j = i + i; j <= n; j += i)
                if (prime[j])
                    prime[j] = false;
    vector<T> res;
    for (T i = 2; i <= n; i++)
        if (prime[i])
            res.push_back(i);
    return res;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    vector<int> primes = sieve(31);
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> arr(n);
        fori(i, 0, n)
        {
            cin >> arr[i];
        }
        vector<int> res(n, -1);
        int x = 1;
        for (auto prime : primes)
        {
            bool flag = false;
            for (int i = 0; i < n; i++)
            {
                if (res[i] != -1 || arr[i] % prime)
                    continue;
                res[i] = x;
                flag = true;
            }
            if (flag)
                x++;
        }
        cout << x - 1 << endl;
        for (auto v : res)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}