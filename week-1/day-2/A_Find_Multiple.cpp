#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int m = 1;
    while ((m * c) <= b)
    {
        if ((m * c) >= a)
            break;
        else
            m++;
    }
    if ((m * c) >= a && (m * c) <= b)
        cout << (m * c) << endl;
    else
        cout << -1 << endl;
    return 0;
}