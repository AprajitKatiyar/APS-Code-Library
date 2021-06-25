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
        int l,r;
        cin>>l>>r;
        int count=0;
        for(int i=0;i<=30;i++){
            for(int j=0;j<=30;j++){
                int ele=pow(2,i)*pow(3,j);
                if(ele>=l and ele<=r)
                count++;
            }
        }
        cout<<count;
    }
         
    
      
    
        
        
    
}