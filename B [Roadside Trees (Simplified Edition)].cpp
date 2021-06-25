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
        int sum=v[0];
        for(int i=0;i<n-1;i++)
            sum+=(abs(v[i]-v[i+1])+1);
        
        cout<<sum+n;
        
        
         
    }
}