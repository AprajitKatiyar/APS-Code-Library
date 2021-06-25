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
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        cin>>v[i];
        int x;
        for(int i=0;i<m;i++){
            cin>>x;
            mp[x]++;
        }
        for(int i=0;i<n;i++){
            if(mp[v[i]]!=0)
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
      
}