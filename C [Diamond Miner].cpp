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
      int a,b;
      vector<int>x,y;
      for(int i=0;i<2*n;i++){
          cin>>a>>b;
          if(a==0)
          y.push_back(abs(b));
          else if(b==0)
          x.push_back(abs(a));
          
      }
      sort(x.begin(),x.end());
      sort(y.begin(),y.end());
      double ans=0;
      for(int i=0;i<n;i++)
      ans+=sqrt(pow(x[i],2)*1.0+pow(y[i],2)*1.0);
      cout<<setprecision(10)<<ans<<endl;
      
        
    }
      
}