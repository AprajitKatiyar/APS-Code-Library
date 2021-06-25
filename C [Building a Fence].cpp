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
        int height[n];
        for(int i=0;i<n;i++)
        cin>>height[i];
        int minimum[n],maximum[n];
        minimum[0]=height[0];
        maximum[0]=height[0];
        bool ok=true;
        for(int i=1;i<n;i++){
            minimum[i]=max(minimum[i-1]+1-k,height[i]);
            if(i!=n-1)
            maximum[i]=min(maximum[i-1]+k-1,height[i]+k-1);
            else
            maximum[i]=min(maximum[i-1]+k-1,height[i]);
            if(maximum[i]<minimum[i]){
                ok=false;
                break;
            }
        }
        if(ok==false)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
    }
         
    
      
    
        
        
    
}