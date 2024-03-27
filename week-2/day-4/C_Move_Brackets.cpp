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
        string str;
        cin >> n >> str;
        int wrong_op = 0;
        int wrong_cl = 0;
        int op = 0;
        int cl = 0;
        for (auto v : str)
        {
            if (v == '(')
            {
                if (cl > 0)
                {
                    wrong_cl = cl;
                    cl = 0;
                }
                op++;
            }
            else
            {
                if (op > 0)
                {
                    op--;
                }
                else
                {
                    wrong_cl++;
                }
            }
        }
        cout << max(wrong_op + op, wrong_cl + cl) << endl;
    }
    return 0;
}