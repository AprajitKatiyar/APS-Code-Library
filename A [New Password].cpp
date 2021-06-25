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
        int n,k;
        cin>>n>>k;
        char c='a';
        for(int i=0;i<n;i++){
            cout<<c;
            c++;
            if(c==('a'+k))
            c='a';
        }
        
    }
}