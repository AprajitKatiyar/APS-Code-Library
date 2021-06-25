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
      vector<int>arr(n);
      int ans=-1;
      for(int i=0;i<n;i++)
      cin>>arr[i];
      while(1){
          ans=-1;
          bool flag=false;
          int i;
          for(i=0;i<n-1;i++){
              if(arr[i]<arr[i+1]){
                  flag=true;
                  if(i==0){
                  int diff=arr[i+1]-arr[i];
                  arr[i]+=min(k,diff);
                  k-=min(k,diff);
                  
                  break;
                  }
                  else{
                      if(arr[i]==arr[i-1]){
                      k-=1;
                      arr[i]++;
                      break;
                      }
                      else{
                      int diff=min(arr[i-1],arr[i+1])-arr[i];
                      arr[i]+=min(diff,k);
                      k-=min(diff,k);
                      
                      break;
                      }
                  }
                  
              }
              
          }
          if(flag==false)
          break;
          else if(k==0){
              
              ans=i+1;
              break;
          }
      }
      cout<<ans<<endl;
    }
      
}