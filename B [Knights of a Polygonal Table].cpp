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
      int n,k;
      cin>>n>>k;
      vector<int>p(n);
      vector<int>c(n);
      unordered_map<int,int>mp1,mp2;
      multiset<int,greater<int>>ms;
      int sum=0;
      for(int i=0;i<n;i++){
          cin>>p[i];
          mp1[p[i]]=i;
      }
      for(int i=0;i<n;i++)
      cin>>c[i];
      vector<pair<int,int>>v;
      for(int i=0;i<n;i++){
          v.push_back({p[i],c[i]});
      }
      sort(v.begin(),v.end());
      for(int i=0;i<n;i++){
          if(i-1>=0){
              ms.insert(v[i-1].second);
          }
          sum=0;
          if(ms.size()!=0){
              int count=0;
              for(auto it=ms.begin();it!=ms.end();it++){
                  if(count==k)
                  break;
                  sum+=*it;
                  count++;
                  
              }
          }
          mp2[mp1[v[i].first]]=sum;
      }
      for(int i=0;i<n;i++)
      cout<<mp2[i]+c[i]<<" ";
      
    }
}