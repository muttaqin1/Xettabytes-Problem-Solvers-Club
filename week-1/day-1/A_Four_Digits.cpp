#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(4, 0);
    int x = 3;
    while (n > 0)
    {
        arr[x] = n % 10;
        n /= 10;
        x--;
    }
    for (auto v : arr)
        cout << v;
    cout << endl;

    return 0;
}