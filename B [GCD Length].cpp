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
       int a,b,c;
       cin>>a>>b>>c;
       int mini=min(a,b),maxi=max(a,b);
       int x=2*pow(10,mini-1);
       int y=2*pow(10,maxi-1);
       if(c==min(a,b)){
           if(a<=b)
           cout<<x<<" "<<y<<endl;
           else
           cout<<y<<" "<<x<<endl;
           continue;
       }
       for(int i=maxi-1;i>=c;i--){
           y+=(2*pow(10,i-1));
       }
       if(a<=b)
       cout<<x<<" "<<y<<endl;
       else
       cout<<y<<" "<<x<<endl;
       
       
        
    }
 
 
}