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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        reverse(v.begin(),v.end());
        int start=n,prev=-1;
        for(int i=0;i<n;i++){
            if(v[i]>=prev)
            prev=v[i];
            else{
                start=i-1;
                break;
            }
        }
        int end=n-1;
        for(int i=start+1;i<n;i++){
            if(v[i]<=prev)
            prev=v[i];
            else{
                end=i-1;
                break;
                
            }
        }
        cout<<n-1-end<<endl;
        
        
        
         
    }
}