#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
   // cin>>t;
    while(t--){
       int n,m;
       cin>>n>>m;
       int x;
       vector<pair<int,int>>v;
       set<int>s;
       for(int i=0;i<n;i++){
           cin>>x;
           v.push_back({x,-1*(i+1)});
       }
       for(int i=0;i<m;i++){
           cin>>x;
           v.push_back({x,(i+1)});
           s.insert(x);
       }
       sort(v.begin(),v.end());
       vector<int>right(n+m);
       vector<int>left(n+m);
       int mini=LLONG_MAX,maxi=LLONG_MIN,ans=LLONG_MIN;
       for(int i=v.size()-1;i>=0;i--){
           if(v[i].second>0)
           mini=min(mini,v[i].first);
           else{
               if(mini!=LLONG_MAX)
               right[i]=abs(mini-v[i].first);
               else
               right[i]=LLONG_MAX;
               if(s.find(v[i].first)!=s.end())
               right[i]=0;
           }
       }
       for(int i=0;i<v.size();i++){
           if(v[i].second>0)
           maxi=max(maxi,v[i].first);
           else{
               if(maxi!=LLONG_MIN)
               left[i]=abs(maxi-v[i].first);
               else
               left[i]=LLONG_MAX;
               if(s.find(v[i].first)!=s.end())
               left[i]=0;
           }
       }
       for(int i=0;i<v.size();i++){
           if(v[i].second<0){
               ans=max(ans,min(left[i],right[i]));
           }
       }
       cout<<ans<<endl;
       
    }
 
 
}