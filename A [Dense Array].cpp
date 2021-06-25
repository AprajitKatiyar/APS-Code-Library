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
      vector<int>v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      int tot=0;
      for(int i=0;i<n-1;i++){
          int a=min(v[i],v[i+1]);
          int b=max(v[i],v[i+1]);
          if(b>2*a){
              int temp=b;
              while(temp>a*2){
                  temp=(temp+1)/2;
                  tot++;
              }
          }
      }
      cout<<tot<<endl;
      
    }
      
}