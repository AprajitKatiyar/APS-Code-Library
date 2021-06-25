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
       int r,b,d;
       cin>>r>>b>>d;
       if(r>b)
       swap(r,b);
       if(d==0){
           if(r==b)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
           continue;
       }
       if(((b+r-1)/r)-1 > d)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
       
        
    }
 
 
}