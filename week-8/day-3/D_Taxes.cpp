#include <bits/stdc++.h>
#define fori(i, s, e) for (long long int i = s; i < e; i++)
#define forei(i, s, e) for (long long int i = s; i <= e; i++)
#define ford(i, s, e) for (long long int i = s; i > e; i--)
#define fored(i, s, e) for (long long int i = s; i >= e; i--)
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

bool is_prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    fastread();

    int n;
    cin >> n;
    if (is_prime(n))
        cout << 1;
    else if (n % 2 == 0)
        cout << 2;
    else
    {
        if (is_prime(n - 2))
        {
            cout << 2;
        }
        else
            cout << 3;
    }
    cout << endl;
    return 0;
}