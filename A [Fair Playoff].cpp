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
     vector<pair<int,int>>v;
     int x;
      for(int i=0;i<4;i++){
          cin>>x;
          v.push_back({x,i});
      }
      sort(v.begin(),v.end(),greater<pair<int,int>>());
      int a=v[3].second,b=v[2].second;
      if((a==2 and b==3 ) or (a==3 and b==2)){
          cout<<"NO"<<endl;
          continue;
      }
      if((a==0 and b==1) or (a==1 and b==0)){
          cout<<"NO"<<endl;
          continue;
      }
      cout<<"YES"<<endl;
      
       
    }
 
 
}