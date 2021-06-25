#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
       int k;
       cin>>k;
       vector<int>v(12);
       for(int i=0;i<12;i++)
       cin>>v[i];
       int ans=0;
       if(k==0){
           cout<<0<<endl;
           continue;
       }
       sort(v.begin(),v.end(),greater<int>());
       int temp=0;
       bool ok=false;
       for(int i=0;i<12;i++){
           temp+=v[i];
           if(temp>=k){
               ok=true;
               ans=i+1;
               break;
           }
       }
       if(ok==false)
       cout<<-1<<endl;
       else
       cout<<ans<<endl;
        
    }
}