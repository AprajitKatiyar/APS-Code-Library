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
      int n,k;
      cin>>n>>k;
      set<int>s;
      int x;
      for(int i=0;i<n;i++){
          cin>>x;
          s.insert(x);
      }
      if(k==0){
          cout<<s.size()<<endl;
          continue;
      }
      auto it=s.end();
      it--;
      int big=*it,mex=-1;
      for(int i=0;i<=big;i++){
          if(s.find(i)==s.end()){
              mex=i;
              break;
          }
      }
      if(mex==-1)
      cout<<s.size()+k<<endl;
      else{
          s.insert((big+mex+1)/2);
          cout<<s.size()<<endl;
      }
        
    }
      
}