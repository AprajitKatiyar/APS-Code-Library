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
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        vector<int>cost(m);
        for(int i=0;i<n;i++)
        cin>>v[i],v[i]--;
        for(int i=0;i<m;i++)
        cin>>cost[i];
        sort(v.begin(),v.end(),greater<int>());
        int j=0,sum=0;
        for(int i=0;i<n;i++){
            if(j<=v[i]){
                sum+=cost[j];
                j++;
            }
            else
            sum+=cost[v[i]];
        }
        cout<<sum<<endl;
        
        
         
    }
}