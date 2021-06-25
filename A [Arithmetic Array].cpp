#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP
    io;
    int t=1;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>v(n);
      int sum=0;
      for(int i=0;i<n;i++){
          cin>>v[i];
          sum+=v[i];
      }
      if(sum<n){
          cout<<1<<endl;
      }
      else if(sum>=n){
          cout<<abs(sum-n)<<endl;
      }
    }
 
 
}