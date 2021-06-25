#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
   // cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        unordered_map<int,string>mp;
        unordered_map<string,int>group_string;
        unordered_map<int,int>val;
        string s;
        for(int i=1;i<=n;i++){
            cin>>s;
            mp[i]=s;
        }
        vector<int>cost(n);
        for(int i=0;i<n;i++)
        cin>>cost[i];
        int x;
        for(int i=0;i<k;i++){
            cin>>x;
            int minimum=LLONG_MAX,y;
            for(int j=0;j<x;j++){
                cin>>y;
                minimum=min(minimum,cost[y-1]);
                group_string[mp[y]]=i+1;
            }
            val[i+1]=minimum;
            
        }
        string s1;
        int sum=0;
        for(int i=0;i<m;i++){
            cin>>s1;
            sum+=(val[group_string[s1]]);
        }
        cout<<sum<<endl;
        
    }
      
}