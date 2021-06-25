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
        unordered_map<int,int>mp;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int count=0;
        vector<int>res;
        for(int i=0;i<n;i++){
            int ele=v[i];
            bool ok=false;
            for(int j=0;j<=30;j++){
                int temp=pow(2,j)-ele;
                if(temp==v[i] and mp[temp]>1){
                ok=true;
                break;
                }
                else if((temp!=v[i] and mp[temp]>0)){
                ok=true;
                break;
                }
            }
            
            if(ok==false){
                
            count++;
            }
        }
        cout<<count;
        // for(auto it:res)
        // cout<<it<<" ";
        
    }
         
    
      
    
        
        
    
}