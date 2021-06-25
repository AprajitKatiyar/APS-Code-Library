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
      if(n%2==0){
          if(k%n==0)
          cout<<n<<endl;
          else
          cout<<k%n<<endl;
          continue;
      }
      int temp;
      int mid=(n+1)/2;
      if(k<mid){
          temp=k;
      }
      else{
          int ans;
          if(k%(mid-1)==0)
          ans=(k-1)/(mid-1);
          else
          ans=k/(mid-1);
          temp=k+ans;
      }
      
      if(temp%n==0){
          cout<<n<<endl;
          
      }
      else
          cout<<temp%n<<endl;
      
      
      
    }
      
}