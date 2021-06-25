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
        int n,k;
        cin>>n>>k;
        int x;
        vector<pair<int,int>>v;
        map<int,int>mp1,mp2;
        for(int i=0;i<n;i++){
            cin>>x;
            mp1[x]++;
            v.push_back({x,i+1});
        }
        sort(v.begin(),v.end());
        
        bool ok=true;
        for(auto it:mp1){
            if(it.second>k){
                ok=false;
                break;
            }
        }
        if(ok==false)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            int temp=1;
            for(int i=0;i<v.size();i++){
                mp2[v[i].second]=temp;
                temp++;
                if(temp>k)
                temp=1;
            }
            // if(mp2[v[n-2].second]==k)
            // mp2[v[n-1].second]=1;
            // else
            // mp2[v[n-1].second]=mp2[v[n-2].second]+1;
            for(int i=1;i<=n;i++)
            cout<<mp2[i]<<" ";
        }
    }
         
    
      
    
        
        
    
}