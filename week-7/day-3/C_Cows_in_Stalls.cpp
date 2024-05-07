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
#define pb push_back
#define full(x) (x).begin(), (x).end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
template <typename T, bool U = false>
using Pq = std::priority_queue<T, std::vector<T>, std::conditional_t<U, greater<T>, less<T>>>;
template <typename T>
void look(vector<T> &arr);
template <typename T>
void look(stack<T> st);
template <typename T>
void look(Pq<T, true> pq);
template <typename T>
void look(Pq<T, false> pq);
template <typename T>
void look(queue<T> q);
template <typename T>
void look(list<T> &list);

void Muttaqin()
{
    int n, k;
    cin >> n >> k;
    Vlong arr(n);
    fori(i, 0, n) cin >> arr[i];
    auto check = [&](ll mid)
    {
        int i = 0;
        ll cnt = 1;
        while (i < n - 1)
        {
            int j = i + 1;
            while (j < n)
            {
                if (abs(arr[i] - arr[j]) >= mid)
                {
                    cnt++;
                    i = j - 1;
                    break;
                }
                else
                {
                    j++;
                }
            }
            if (cnt >= k)
                return true;
            i++;
        }
        return cnt >= k;
    };
    ll l = 0, r = 1e9, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
}

int main()
{
    fastread();
    //    int t;
    //    cin >> t;
    //    while (t--)
    //   {
    Muttaqin();
    //    }
    return 0;
}
template <typename T>
void look(queue<T> q)
{
    cout << "{ ";
    while (!q.empty())
    {
        cout << q.front() << ", ";
        q.pop();
    }
    cout << " }\n";
}
template <typename T>
void look(Pq<T, false> pq)
{
    cout << "{ ";
    while (!pq.empty())
    {
        cout << pq.top() << ", ";
        pq.pop();
    }
    cout << " }\n";
}
template <typename T>
void look(Pq<T, true> pq)
{
    cout << "{ ";
    while (!pq.empty())
    {
        cout << pq.top() << ", ";
        pq.pop();
    }
    cout << " }\n";
}
template <typename T>
void look(stack<T> st)
{
    cout << "{ ";
    while (!st.empty())
    {
        cout << st.top() << ", ";
        st.pop();
    }
    cout << " }\n";
}
template <typename T>
void look(vector<T> &arr)
{
    cout << "{ ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i + 1 < arr.size())
            cout << ",";
    }
    cout << " }\n";
}
template <typename T>
void look(list<T> &list)
{
    cout << "{ ";
    for (auto v : list)
    {
        cout << v;
        cout << ",";
    }
    cout << " }\n";
}