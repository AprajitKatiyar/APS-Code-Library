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
         int n,d;
         cin>>n>>d;
         vector<int>v(n);
         bool ok=true;
         for(int i=0;i<n;i++){
         cin>>v[i];
         if(v[i]>d)
         ok=false;
         }
         sort(v.begin(),v.end());
         if(ok==true){
             cout<<"YES"<<endl;
             
         }
         else{
             if(ok==false and (v[0]+v[1])<=d)
             cout<<"YES"<<endl;
             else
             cout<<"NO"<<endl;
         }
         
    }
}