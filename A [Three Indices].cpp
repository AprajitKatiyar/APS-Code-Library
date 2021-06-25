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
       vector<int>v(n);
       vector<int>pos(n+1);
       for(int i=0;i<n;i++){
           cin>>v[i];
           pos[v[i]]=i;
       }
       bool ok=false;
       int a,b,c;
       for(int i=n;i>=1;i--){
           if(pos[i]!=0 and pos[i]!=n-1){
               if(v[pos[i]-1]<i and v[pos[i]+1]<i){
                   ok=true;
                   a=pos[i];
                   b=pos[i]+1;
                   c=pos[i]+2;
                   break;
               }
           }
       }
       if(ok==true){
           cout<<"YES"<<endl;
           cout<<a<<" "<<b<<" "<<c<<endl;
       }
       else
       cout<<"NO"<<endl;
       
       
      
    }
        
        
    
}