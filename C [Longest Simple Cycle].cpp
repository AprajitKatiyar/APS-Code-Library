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
      int n;
      cin>>n;
      vector<int>c(n);
      for(int i=0;i<n;i++)
      cin>>c[i];
      vector<int>a(n);
      vector<int>b(n);
      for(int i=0;i<n;i++)
      cin>>a[i];
      for(int i=0;i<n;i++)
      cin>>b[i];
      vector<int>diff(n);
      for(int i=0;i<n-1;i++)
        diff[i]=abs(a[i+1]-b[i+1]);
      vector<int>dp(n);
      dp[1]=c[1]-1+2+diff[0];
      int maximum=LLONG_MIN;
      maximum=max(maximum,dp[1]);
      for(int i=2;i<n;i++){
          if(diff[i-1]==0)
          dp[i]=c[i]-1+2;
          else
          dp[i]=max(c[i]-1+2+diff[i-1],c[i]-1+2+dp[i-1]-diff[i-1]);
          maximum=max(maximum,dp[i]);
      }
      cout<<maximum<<endl;
      
      
    }
}