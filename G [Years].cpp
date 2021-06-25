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
        map<int,int>mp;
        int a,b;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            mp[a]++;
            mp[b]--;
        }
        int maximum=LLONG_MIN,sum=0,ans;
        for(auto it:mp){
            sum+=it.second;
            if(sum>maximum){
                maximum=sum;
                ans=it.first;
            }
        }
        cout<<ans<<" "<<maximum;
        
        
         
    }
}