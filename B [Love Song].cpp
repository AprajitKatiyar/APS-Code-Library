#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP
    io;
    int t=1;
    //cin>>t;
    while(t--){
       int n,q;
       cin>>n>>q;
       string s;
       cin>>s;
       vector<int>v(n,0);
       v[0]=s[0]-'a'+1;
       for(int i=1;i<n;i++){
           v[i]=v[i-1]+s[i]-'a'+1;
       }
       while(q--){
           int a,b;
           cin>>a>>b;
           a--,b--;
           if(a==0)
           cout<<v[b]<<endl;
           else
           cout<<v[b]-v[a-1]<<endl;
       }
    }
 
 
}