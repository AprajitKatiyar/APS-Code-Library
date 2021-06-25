#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int dp[1500][1500];
int solve(int right,int left, int decay){
    //base 
    if(right==0)
    return 1;
    if(decay==1)
    return 1;
    
    if(dp[right][decay]!=-1)
    return dp[right][decay];
    int ans=0;
    ans+=(solve(right-1,left+1,decay)+solve(left,right,decay-1))%mod;
    return dp[right][decay]=ans;
}
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        memset(dp,-1,sizeof(dp));
        int res=solve(n,0,k);
        cout<<res%mod<<endl;
    }
   
      
}