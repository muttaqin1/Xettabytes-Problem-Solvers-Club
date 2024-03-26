#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> final_arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> final_arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            while (a--)
            {
                char c;
                cin >> c;
                if (c == 'U')
                {
                    int curr_state = final_arr[i];
                    if (curr_state - 1 < 0)
                    {
                        final_arr[i] = 9;
                    }
                    else
                    {
                        final_arr[i]--;
                    }
                }
                else
                {
                    int curr_state = final_arr[i];
                    if (curr_state + 1 > 9)
                    {
                        final_arr[i] = 0;
                    }
                    else
                    {
                        final_arr[i]++;
                    }
                }
            }
            cout << final_arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}