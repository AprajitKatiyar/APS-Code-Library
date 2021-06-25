#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
    cin>>t;
    while(t--){
       int n,u,v;
       cin>>n>>u>>v;
       set<int>s;
       vector<int>arr(n);
       for(int i=0;i<n;i++){
       cin>>arr[i];
       s.insert(arr[i]);
       }
       bool ok=false;
       for(int i=0;i<n-1;i++){
           if(abs(arr[i]-arr[i+1])>=2){
               ok=true;
               break;
           }
       }
       if(ok){
       cout<<0<<endl;
       continue;
       }
       if(s.size()==1){
           cout<<min(2*v,v+u)<<endl;
           continue;
       }
       cout<<min(u,v)<<endl;
        
    }
 
 
}