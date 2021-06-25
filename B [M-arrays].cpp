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
       int n,m;
       cin>>n>>m;
       map<int,int>mp,vis;
       int x;
       int count=0;
       for(int i=0;i<n;i++){
           cin>>x;
           if(x%m==0)
           count=1;
           else
           mp[x%m]++;
       }
      
       for(auto it:mp){
           if(vis[it.first]==0){
                int temp=abs(it.second-mp[m-it.first]);
                if((m-it.first)==it.first){
                    count++;
                    vis[it.first]=1;
                }
                else{
                    if(temp==0 or temp==1){
                        count++;
                        vis[it.first]=1;
                        vis[m-it.first]=1;
                    }
                    else{
                        count++;
                        count+=(max(it.second,mp[m-it.first])-min(it.second,mp[m-it.first])-1);
                        vis[it.first]=1;
                        vis[m-it.first]=1;
                        
                    }
                }
           }
       }
       cout<<count<<endl;
       
        
        
    }
      
}