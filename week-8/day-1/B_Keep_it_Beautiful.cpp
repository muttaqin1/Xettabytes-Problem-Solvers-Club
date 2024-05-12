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
    Vlong arr(n), aux;
    fori(i, 0, n) cin >> arr[i];
    bool flag = true;
    aux.push_back(arr[0]);
    cout << 1;
    fori(i, 1, n)
    {
        if (flag)
        {
            if (arr[i] >= aux.back())
            {
                aux.push_back(arr[i]);
                cout << 1;
            }
            else if (arr[i] <= aux.front())
            {
                aux.push_back(arr[i]);
                cout << 1;
                flag = false;
            }
            else
            {
                cout << 0;
            }
        }
        else
        {
            if (arr[i] >= aux.back() && arr[i] <= aux.front())
            {
                aux.push_back(arr[i]);
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
    }
    cout << endl;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        Muttaqin();
    }
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