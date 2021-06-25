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
       for(int i=0;i<n;i++)
       cin>>v[i];
       bool ok=true;
       for(int i=0;i<n;i++){
           if(v[i]!=i+1){
               ok=false;
               break;
           }
       }
       if(ok){
           cout<<0<<endl;
           continue;
       }
       if(v[0]==1 or v[n-1]==n)
       cout<<1<<endl;
       else{
           if(v[0]==n and v[n-1]==1)
           cout<<3<<endl;
           else
           cout<<2<<endl;
       }
        
    }
 
 
}