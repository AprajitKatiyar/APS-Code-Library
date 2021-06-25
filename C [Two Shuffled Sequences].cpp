#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++)
       cin>>v[i];
       map<int,int>mp;
       bool ok=true;
       for(int i=0;i<n;i++){
           mp[v[i]]++;
       }
       vector<int>inc;
       for(auto it:mp){
           if(it.second>2){
               ok=false;
               break;
           }
           else if(it.second==2)
           inc.push_back(it.first);
       }
       if(ok==false)
       cout<<"NO"<<endl;
       else{
           cout<<"YES"<<endl;
           cout<<inc.size()<<endl;
           sort(inc.begin(),inc.end());
           if(inc.size()!=0){
               for(auto it:inc)
               cout<<it<<" ";
               
           }
           cout<<endl;
           cout<<mp.size()<<endl;
           vector<int>dec;
           for(auto it:mp)
           dec.push_back(it.first);
           reverse(dec.begin(),dec.end());
           for(auto it:dec)
           cout<<it<<" ";
       }
      
    }
        
        
    
}