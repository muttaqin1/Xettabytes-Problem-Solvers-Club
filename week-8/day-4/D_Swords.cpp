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
    int n;
    cin >> n;
    Vlong arr(n);
    ll mx = LONG_MIN;
    fori(i, 0, n)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    Vlong diff_arr;
    for (auto v : arr)
    {
        if (v != mx)
        {
            diff_arr.push_back(mx - v);
        }
    }
    map<ll, pair<int, int>> mp1;
    // for (auto v : diff_arr)
    // {
    //     map<ll, int> mp2;
    //     for (int i = 2; i * i <= v; i++)
    //     {
    //         if (v % i == 0)
    //         {
    //             while (v % i == 0)
    //             {
    //                 mp2[i]++;
    //                 v /= i;
    //             }
    //         }
    //     }
    //     if (v > 1)
    //         mp2[v]++;

    //     for (pair<ll, int> v : mp2)
    //     {
    //         mp1[v.first].first == 0 ? mp1[v.first].first = v.second : mp1[v.first].first = min(mp1[v.first].first, v.second);
    //         mp1[v.first].second++;
    //     }
    //     // cout << "-------------------------" << endl;
    // }
    // ll gc = 1;
    // for (auto v : mp1)
    // {
    //     if (v.second.second == diff_arr.size())
    //     {
    //         gc *= (v.first * v.second.first);
    //     }
    // }
    ll gc = diff_arr[0];
    fori(i, 1, diff_arr.size())
    {
        gc = __gcd(diff_arr[i], gc);
    }
    ll x = 0;
    for (auto v : diff_arr)
    {
        x += (v / gc);
    }
    cout << x << " " << gc << endl;
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