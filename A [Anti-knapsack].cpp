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
        int n,k;
        cin>>n>>k;
        cout<<(k/2)+(n-k)<<endl;
        for(int i=1;i<=(k/2);i++)
        cout<<k-i<<" ";
        for(int i=k+1;i<=n;i++)
        cout<<i<<" ";
        
        cout<<endl;
    }
 
 
}