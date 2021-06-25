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
       int k;
       cin>>k;
       int a=k,b=100-k,i;
       for( i=100;i>=1;i--)
           if(a%i==0 and b%i==0)
           break;
       cout<<(a/i)+(b/i)<<endl;
        
    }
 
 
}