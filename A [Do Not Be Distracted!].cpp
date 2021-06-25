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
       string s;
       cin>>s;
       map<char,int>mp;
       mp[s[0]]=1;
       bool ok=true;
       for(int i=1;i<n;i++){
           if(mp[s[i]]!=0 and mp[s[i]]!=i){
               ok=false;
               break;
           }
           mp[s[i]]=i+1;
       }
       if(ok)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
        
    }
 
 
}