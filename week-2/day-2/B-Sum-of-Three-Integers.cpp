#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main(){
    fastread();
    int n,k;
    cin>>n>>k;
    int cnt=0;
   for (int i = 0; i <=n; i++) {
     for (int j = 0; j <=n; j++) {
      int aux=((k-i)-j);
      if(aux>=0 && aux <=n)cnt++;
     }
   }
   cout<<cnt<<endl;
    return 0;
    
}
