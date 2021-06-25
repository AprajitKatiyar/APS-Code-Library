#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
bool check(int n,int d){
    while(n>0){
        if(n%10==d)
        return true;
        n/=10;
    }
    return false;
}
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
      int n,d;
      cin>>n>>d;
      vector<int>v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      for(int i=0;i<n;i++){
          if(v[i]<d)
          cout<<"NO"<<endl;
          else{
              int tot=v[i]/d;
              int temp=v[i]%d;
              if(temp==0){
                  cout<<"YES"<<endl;
                  continue;
              }
              bool ok=false;
              for(int j=1;j<=tot;j++){
                  temp+=d;
                  if(check(temp,d)==true){
                      ok=true;
                      break;
                  }
              }
              if(ok==true)
              cout<<"YES"<<endl;
              else
              cout<<"NO"<<endl;
              
          }
      }
       
    }
}