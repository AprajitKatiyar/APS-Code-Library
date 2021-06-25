#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int n,h,l,r;
vector<int>v;
int dp[2005][2005];
int solve(int pos,int curr){
    //base 
    curr%=h;
    if(pos==n)
    return 0;
    
    if(dp[pos][curr]!=-1)
    return dp[pos][curr];
    int a,b,k=0,ans=LLONG_MIN;
    a=curr+v[pos];
    b=curr+v[pos]-1;
    a%=h;
    b%=h;
    k=0;
    if(a>=l and a<=r)
    k=1;
    ans=max(ans,k+solve(pos+1,a));
    k=0;
    if(b>=l and b<=r)
    k=1;
    ans=max(ans,k+solve(pos+1,b));
    return dp[pos][curr]=ans;
    
}
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
   // cin>>t;
    while(t--){
        cin>>n>>h>>l>>r;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        memset(dp,-1,sizeof(dp));
        cout<<solve(0,0)<<endl;
    }
 
 
}