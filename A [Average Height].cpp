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
       int n;
       cin>>n;
       vector<int>v(n);
       vector<int>even;
       vector<int>odd;
       for(int i=0;i<n;i++){
           cin>>v[i];
           if(v[i]%2==0)
           even.push_back(v[i]);
           else
           odd.push_back(v[i]);
       }
       for(auto it:even)
       cout<<it<<" ";
       for(auto it:odd)
       cout<<it<<" ";
       cout<<endl;
    }
   
      
}