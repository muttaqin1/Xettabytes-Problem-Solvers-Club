#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
using namespace std;

int main(){
    fastread();
    int n;
    ll s;
    cin>>n>>s;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin>>arr[i];
    }
    ll sum=0;
    int l=0, r=0,ans=0;
    while(r<n){
     sum+=arr[r];
     if(sum<=s){
       ans=max(ans,r-l+1);
       
       
     }else{
       sum-=arr[l];
       l++;
     }
      
     r++; 
      
    }
    cout<<ans<<endl;
    return 0;
    
}
