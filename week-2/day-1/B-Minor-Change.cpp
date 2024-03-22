#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main(){
    fastread();
    string str1, str2;
    cin>>str1>>str2;
    int cnt=0;
    for (int i = 0; i < str2.size(); i++) {
      if(str1[i]!= str2[i])cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
