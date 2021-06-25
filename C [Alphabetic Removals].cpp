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
        string s;
        cin>>s;
        unordered_map<int,int>mp1;
        map<char,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[s[i]].push_back(i);
        }
        int count=0;
        for(auto it:mp){
            for(auto it2:it.second){
                if(count==k)
                break;
                mp1[it2]=1;
                count++;
            }
            if(count==k)
            break;
        }
        for(int i=0;i<n;i++){
            if(mp1[i]!=1)
            cout<<s[i];
        }
        
    }
      
}