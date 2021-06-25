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
        int n,k;
        cin>>n>>k;
        int x;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%k!=0)
            mp[k-(x%k)]++;
        }
        int maximum=0;
        for(auto it:mp){
            int curr=it.first+((it.second-1)*k);
            curr++;
            maximum=max(maximum,curr);
        }
        cout<<maximum<<endl;
        
    }
}