#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool ok=true;
        int maxi=LLONG_MIN;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            maxi=max(maxi,v[i]);
            if(v[i]<0)
            ok=false;
        }
        if(ok==false){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        cout<<maxi+1<<endl;
        for(int i=0;i<=maxi;i++)
        cout<<i<<" ";
        cout<<endl;
      
       
    }
 
 
}