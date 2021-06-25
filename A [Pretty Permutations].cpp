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
      if(n%2==0){
          for(int i=1;i<=n-1;i+=2){
              cout<<i+1<<" "<<i<<" ";
          }
      }
      else{
          for(int i=1;i<=n-3-1;i+=2){
              cout<<i+1<<" "<<i<<" ";
          }
          cout<<n<<" "<<n-2<<" "<<n-1;
      }
      cout<<endl;
      
        
    }
 
 
}