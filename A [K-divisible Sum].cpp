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
      cin>>n >>k;
      if(n%k==0) 
      cout<< 1 << endl;
       
       else if(n<k) 
       cout << (n+k-1)/n << endl;
       else 
       cout << 2 << endl;
    }
}