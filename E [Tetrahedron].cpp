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
        int n;
        cin>>n;
        int dp[2][n+1];
        dp[0][0]=1;
        dp[1][0]=0;
        for(int i=1;i<=n;i++){
            dp[0][i]=(3LL*dp[1][i-1])%mod;
            dp[1][i]=(2LL*dp[1][i-1]+dp[0][i-1])%mod;
        }
        cout<<dp[0][n]%mod<<endl;
    }
   
      
}