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
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin>>b[i];
        for(int i=1;i<n;i++)
        a[i]+=a[i-1];
        int l=0;
        for(int i=0;i<m;i++){
            if(a[l]>=b[i]){
                cout<<l+1<<" ";
                if(l==0)
                cout<<b[i]<<endl;
                else
                cout<<b[i]-a[l-1]<<endl;
            }
            else{
                while(a[l]<b[i])
                l++;
                cout<<l+1<<" ";
                if(l==0)
                cout<<b[i]<<endl;
                else
                cout<<b[i]-a[l-1]<<endl;
            }
        }
        
    }
      
}