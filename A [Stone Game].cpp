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
       vector<int>v(n);
       int maxi=LLONG_MIN,mini=LLONG_MAX;
       for(int i=0;i<n;i++){
           cin>>v[i];
           maxi=max(maxi,v[i]);
           mini=min(mini,v[i]);
       }
       int pos_maxi,pos_mini;
       for(int i=0;i<n;i++){
           if(v[i]==maxi)
           pos_maxi=i+1;
           if(v[i]==mini)
           pos_mini=i+1;
       }
       int a=min(pos_maxi,pos_mini);
       int b=max(pos_maxi,pos_mini);
       int ans=min({(n-a+1),b,(a+(n-b+1))});
       cout<<ans<<endl;
    }
 
 
}