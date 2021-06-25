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
        vector<int>v(n);
        int maximum=LLONG_MIN;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            maximum=max(maximum,v[i]);
            mp[v[i]]++;
        }
        int dp[maximum+1]={0};
        dp[0]=0;
        dp[1]=mp[1];
        for(int i=2;i<=maximum;i++)
            dp[i]=max(dp[i-1],dp[i-2]+(i*mp[i]));
        
        cout<<dp[maximum];
        
    }
}