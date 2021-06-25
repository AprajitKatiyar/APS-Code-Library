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
       vector<int>v(2*n);
       for(int i=0;i<2*n;i++)
       cin>>v[i];
       map<int,int>mp;
       for(int i=0;i<2*n;i++){
           if(mp[v[i]]!=1){
               cout<<v[i]<<" ";
               mp[v[i]]=1;
           }
       }
       cout<<endl;
        
    }
 
 
}