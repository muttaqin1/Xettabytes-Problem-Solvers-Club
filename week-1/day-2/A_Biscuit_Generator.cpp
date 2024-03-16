#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    float T = ((c * 1.0) + 0.5) - a;

    if (a > c)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (floor(T / a) * b) + b << endl;
    }
    return 0;
}