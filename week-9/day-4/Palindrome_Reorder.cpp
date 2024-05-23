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
#define full(x) (x).begin(), (x).end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
template <typename T, bool U = false>
using Pq = std::priority_queue<T, std::vector<T>, std::conditional_t<U, greater<T>, less<T>>>;

void Muttaqin()
{

    string str;
    cin >> str;
    int n = str.size();
    map<char, int> mp;
    for (auto v : str)
    {
        mp[v]++;
    }
    int odd = 0;
    for (auto v : mp)
    {
        if (v.second % 2 != 0)
            odd++;
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {

        if (bool(odd))
        {
            char o;
            string s = "";
            for (auto v : mp)
            {
                if (v.second % 2 != 0)
                {
                    o = v.first;
                }
                else
                {
                    fori(i, 0, v.second / 2)
                    {
                        s += v.first;
                    }
                }
            }
            string temp = s;
            reverse(temp.begin(), temp.end());
            fori(i, 0, mp[o]) s += o;
            cout << s + temp << endl;
        }
        else
        {
            string s = "";
            for (auto v : mp)
            {

                fori(i, 0, v.second / 2)
                {
                    s += v.first;
                }
            }
            string temp = s;
            reverse(temp.begin(), temp.end());
            cout << s + temp << endl;
        }
    }
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
