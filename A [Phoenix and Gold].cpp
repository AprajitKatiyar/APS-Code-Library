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
        int n,x;
        cin>>n>>x;
        map<int,int>mp;
        int sum=0;
        vector<int>v(n);
        vector<int>res;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if((sum+v[i])!=x){
                sum+=v[i];
                res.push_back(v[i]);
                mp[i]=1;
            }
            
        }
        bool ok=true;
        //cout<<sum;
        for(int i=0;i<n;i++){
            if(mp[i]!=1){
                if((sum+v[i])!=x){
                res.push_back(v[i]);
                sum+=v[i];
                }
                else{
                    ok=false;
                    break;
                }
            }
        }
        if(ok){
            cout<<"YES"<<endl;
            for(auto it:res)
            cout<<it<<" ";
            cout<<endl;
        }
        else
        cout<<"NO"<<endl;
       
   }
 
}