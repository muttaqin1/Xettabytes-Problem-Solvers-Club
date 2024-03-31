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
        vector<int> left(n);
        vector<int> right(n);
        vector<int> original(n);
        int wrong_pos_cnt = 0;
        ll sum = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            char curr_char = str[i];
            right[i] = n - (i + 1);
            left[i] = i;
            original[i] = curr_char == 'L' ? left[i] : right[i];
            sum += original[i];
            if (curr_char == 'L')
            {
                int curr_val = original[i];
                if (curr_val < right[i])
                {
                    pq.push(right[i] - curr_val);
                    wrong_pos_cnt++;
                }
            }
            else
            {
                int curr_val = original[i];
                if (curr_val < left[i])
                {
                    pq.push(left[i] - curr_val);
                    wrong_pos_cnt++;
                }
            }
        }
        for (int k = 1; k <= n; k++)
        {
            if (wrong_pos_cnt > 0)
            {
                if (!pq.empty())
                {
                    sum += pq.top();
                    pq.pop();
                    wrong_pos_cnt--;
                }
                cout << sum << " ";
            }
            else
                cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}