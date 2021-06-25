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
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        vector<int>v(2*n);
        for(int i=0;i<2*n;i++)
        cin>>v[i];
        vector<pair<int,int>>res1,res2;
        int sum=0;
        for(int i=0;i<2*n;i++){
            if(mp[v[i]]==0){
                res1.push_back({v[i],i});
                mp[v[i]]=1;
            }
            else
            res2.push_back({v[i],i});
        }
        sort(res1.begin(),res1.end());
        sort(res2.begin(),res2.end());
        int prev=0;
        for(int i=0;i<res1.size();i++){
            sum+=(abs(prev-res1[i].second));
            prev=res1[i].second;
        }
        prev=0;
        for(int i=0;i<res2.size();i++){
            sum+=(abs(prev-res2[i].second));
            prev=res2[i].second;
        }
        cout<<sum<<endl;
        
        
        
    }
      
}