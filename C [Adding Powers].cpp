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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end(),greater<int>());
        unordered_map<int,int>mp;
        bool ok=true;
        for(int i=0;i<n;i++){
            int ele=v[i];
            vector<int>base;
            while(ele>=k){
                base.push_back(ele%k);
                ele/=k;
            }
            base.push_back(ele);
            //reverse(base.begin(),base.end());
            for(int j=0;j<base.size();j++){
                //cout<<base[j];
                if(base[j]==1){
                    if(mp[j]==1){
                        ok=false;
                        break;
                    }
                    else
                    mp[j]=1;
                }
                else if(base[j]>1){
                    ok=false;
                    break;
                }
            }
            if(ok==false)
            break;
            
        }
        if(ok==false)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
    }
}