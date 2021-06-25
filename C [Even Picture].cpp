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
        vector<pair<int,int>>v;
        int i;
        for(i=0;i<n+1;i++){
            v.push_back({i,i});
            v.push_back({i,i+1});
            v.push_back({i+1,i});
        }
        v.push_back({i,i});
        cout<<v.size()<<endl;
        for(auto it:v)
        cout<<it.first<<" "<<it.second<<endl;
        
        
    }
}