#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int n;
vector<int>v[100005];
int dp[100005][2];  // l-->0  r-->1 
int l[100005];
int r[100005];
void dfs(int node,int p){
    for(auto it:v[node]){
        if(it!=p){
            dfs(it,node);
            dp[node][0]+=max(dp[it][0]+abs(l[it]-l[node]),dp[it][1]+abs(r[it]-l[node])); //l on node
            dp[node][1]+=max(dp[it][0]+abs(l[it]-r[node]),dp[it][1]+abs(r[it]-r[node])); //r on node
            
        }
    }
}
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
    cin>>t;
    while(t--){
        cin>>n;
        int a,b;
        for(int i=1;i<=n;i++){
        cin>>l[i]>>r[i];
        v[i].clear();
        }
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n-1;i++){
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(1,-1);
        cout<<max(dp[1][0],dp[1][1])<<endl;
      
      
    
  }
 
 
}