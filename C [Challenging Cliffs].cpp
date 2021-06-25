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
     sort(v.begin(),v.end());
     int l,r,mini=LLONG_MAX;
     for(int i=0;i<n-1;i++){
         if(abs(v[i]-v[i+1])<mini){
             mini=abs(v[i]-v[i+1]);
             l=i,r=i+1;
         }
     }
     //waste only 1 difficulty level opportunity 
     //first place all greater than l 
     //then place all smaller than r 
     cout<<v[l]<<" ";
     for(int i=l+1;i<n;i++){
         if(i!=r)
         cout<<v[i]<<" ";
     }
     for(int i=0;i<=r-1;i++){
         if(i!=l)
         cout<<v[i]<<" ";
     }
     cout<<v[r];
     cout<<endl;
        
    }
 
 
}