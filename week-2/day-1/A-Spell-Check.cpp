#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
    int n;
    string str;
    cin>>n>>str;
   sort(str.begin(),str.end());
    if(str== "Timru")cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    
    }
    return 0;
    
}
