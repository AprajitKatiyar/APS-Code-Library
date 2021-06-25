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
        string s;
        cin>>s;
        map<char,int>mp;
        char c;
        for(int i=0;i<k;i++){
            cin>>c;
            mp[c]=1;
        }
        int sum=0,prev=-1;
        for(int i=0;i<n;i++){
            if(mp[s[i]]==1)
            sum+=(i-prev);
            else
            prev=i;
        }
        cout<<sum<<endl;
        
    }
   
      
}