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
      int n,m;
      cin>>n>>m;
      string s;
      cin>>s;
      vector<int>v[n+5];
      vector<int>col(n+5);
      vector<int>in(n+5,0);
      int a,b;
      while(m--){
          cin>>a>>b;
          v[a].push_back(b);
          in[b]++;
      }
      int dp[n+1][27];
      memset(dp,0,sizeof(dp));
      for(int i=1;i<=n;i++){
          col[i]=s[i-1]-'a';
          
      }
      queue<int>q;
      for(int i=1;i<=n;i++){
          dp[i][col[i]]=1;
          if(in[i]==0)
          q.push(i);
      }
      vector<int>res;
      while(!q.empty()){
          int curr=q.front();
          q.pop();
          res.push_back(curr);
          for(auto it:v[curr]){
              in[it]--;
              if(in[it]==0)
              q.push(it);
          }
      }
      if(res.size()!=n){
          cout<<"-1"<<endl;
          continue;
      }
      
      for(int i=0;i<res.size();i++){
          for(auto it:v[res[i]]){
              for(int j=0;j<26;j++){
              if(j==col[it])
              dp[it][col[it]]=max(dp[it][col[it]],dp[res[i]][col[it]]+1);
              else
              dp[it][j]=max(dp[it][j],dp[res[i]][j]);
              }
          }
      }
      int maximum=LLONG_MIN;
      for(int i=1;i<=n;i++){
          for(int j=0;j<26;j++){
              maximum=max(maximum,dp[i][j]);
          }
      }
      cout<<maximum<<endl;
      
      
      
    }
 
 
}