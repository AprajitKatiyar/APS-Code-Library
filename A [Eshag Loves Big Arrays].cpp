#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
        
       int n;
       cin>>n;
       map<int,int>mp;
       int x;
       for(int i=0;i<n;i++){
           cin>>x;
           mp[x]++;
       }
    //   int maximum=LLONG_MIN;
    //   for(auto it:mp){
    //       maximum=max(maximum,it.second);
    //   }
    //   cout<<n-maximum<<endl;
    // if(mp.begin()->second==n)
    // cout<<0<<endl;
    // else
   cout<<n-(mp.begin()->second)<<endl;
        
        
        
        
        
    
    
    
  }
 
 
}