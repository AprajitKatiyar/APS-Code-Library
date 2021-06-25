#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int n;
vector<int>v;
int dp[205][205];
int solve(int pos,int t){
    //base 
    if(pos>=n)
    return 0;
    if(dp[pos][t]!=-1)
    return dp[pos][t];
    int ans=LLONG_MAX;
    for(int i=t;i<=max(t,v[pos]);i++)
        ans=min(ans,abs(i-v[pos])+solve(pos+1,i+1));
    
    return dp[pos][t]=ans;
}
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
      v.clear();
      cin>>n;
      int x;
      for(int i=0;i<n;i++){
          cin>>x;
          v.push_back(x);
      }
      memset(dp,-1,sizeof(dp));
      sort(v.begin(),v.end());
      cout<<solve(0,1)<<endl;
      
      
    }
 
 
}